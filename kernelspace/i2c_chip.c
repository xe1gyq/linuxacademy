/*
 * Tiny I2C Chip Driver
 *
 * Copyright (C) 2003 Greg Kroah-Hartman (greg@kroah.com)
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, version 2 of the License.
 *
 * This driver shows how to create a minimal I2C bus and algorithm driver.
 *
 * Compile this driver with:

	echo "obj-m := tiny_i2c_chip.o" > Makefile
	make -C <path/to/kernel/src> SUBDIRS=$PWD modules
 */

#define DEBUG 1

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/i2c.h>
#include <linux/hwmon.h>
#include <linux/semaphore.h>

/* Each client has this additional data */
struct chip_data {
	struct i2c_client *client;
	struct semaphore update_lock;
	char valid;			/* !=0 if following fields are valid */
	unsigned long last_updated;	/* In jiffies */
	u16 temp_input;			/* Register values */
	u16 temp_max;
	u16 temp_hyst;
};

static struct i2c_device_id chip_idtable[] = {
	{ "chip", 0 },
	{}
};

MODULE_DEVICE_TABLE(i2c, chip_idtable);

#define REG_TEMP_HYST	0x01
#define REG_TEMP_OS	0x02

static int chip_probe(struct i2c_client *client, const struct i2c_device_id *id);
static int chip_remove(struct i2c_client *client);

/* This is the driver that will be inserted */
static struct i2c_driver chip_driver = {
	.driver = {
		.owner		= THIS_MODULE,
		.name		= "tiny_chip",
	},
	.id_table = chip_idtable,
	.probe = chip_probe,
	.remove	= chip_remove,
};


static void chip_update_client(struct i2c_client *client)
{
	struct chip_data *data = i2c_get_clientdata(client);

	down(&data->update_lock);
	dev_dbg(&client->dev, "%s\n", __FUNCTION__);
	++data->temp_input;
	++data->temp_max;
	++data->temp_hyst;
	data->last_updated = jiffies;
	data->valid = 1;
	up(&data->update_lock);
}

#define show(value)	\
static ssize_t show_##value(struct device *dev, struct device_attribute * attr, char *buf)	\
{								\
	struct i2c_client *client = to_i2c_client(dev);		\
	struct chip_data *data = i2c_get_clientdata(client);	\
								\
	chip_update_client(client);				\
	return sprintf(buf, "%d\n", data->value);		\
}
show(temp_max);
show(temp_hyst);
show(temp_input);

#define set(value, reg)	\
static ssize_t set_##value(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)	\
{								\
	struct i2c_client *client = to_i2c_client(dev);		\
	struct chip_data *data = i2c_get_clientdata(client);	\
	int temp = simple_strtoul(buf, NULL, 10);		\
								\
	down(&data->update_lock);				\
	data->value = temp;					\
	up(&data->update_lock);					\
	return count;						\
}
set(temp_max, REG_TEMP_OS);
set(temp_hyst, REG_TEMP_HYST);

static DEVICE_ATTR(temp_max, S_IWUSR | S_IRUGO, show_temp_max, set_temp_max);
static DEVICE_ATTR(temp_min, S_IWUSR | S_IRUGO, show_temp_hyst, set_temp_hyst);
static DEVICE_ATTR(temp_input, S_IRUGO, show_temp_input, NULL);

/* This function is called by the driver's probe method */
static int chip_probe(struct i2c_client *client, const struct i2c_device_id *id)
{
	struct chip_data *data = NULL;
	int err = 0;

	data = kmalloc(sizeof(*data), GFP_KERNEL);
	if (!data) {
		err = -ENOMEM;
		goto error;
	}
			
	memset(data, 0x00, sizeof(*data));
	
	data->client = client;
	i2c_set_clientdata(client, data);

	data->valid = 0;
	#ifndef init_MUTEX
	sema_init(&data->update_lock,1);
	#else
	init_MUTEX(&data->update_lock);
	#endif

	/* Register sysfs files */
	device_create_file(&client->dev, &dev_attr_temp_max);
	device_create_file(&client->dev, &dev_attr_temp_min);
	device_create_file(&client->dev, &dev_attr_temp_input);

	return 0;

error:
	kfree(data);
	return err;
}

static int chip_remove(struct i2c_client *client)
{
	struct chip_data *data = i2c_get_clientdata(client);
	
	kfree(data);
	return 0;
}

static int __init tiny_init(void)
{
	return i2c_add_driver(&chip_driver);
}

static void __exit tiny_exit(void)
{
	i2c_del_driver(&chip_driver);
}


MODULE_AUTHOR("Greg Kroah-Hartman <greg@kroah.com>");
MODULE_DESCRIPTION("Tiny i2c chip");
MODULE_LICENSE("GPL");

module_init(tiny_init);
module_exit(tiny_exit);
