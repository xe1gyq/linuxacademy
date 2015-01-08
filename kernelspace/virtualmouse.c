#include <linux/fs.h>
#include <asm/uaccess.h>
#include <linux/pci.h>
#include <linux/input.h>
#include <linux/platform_device.h>
#include <linux/module.h>

struct input_dev* vms_input_dev;
static struct platform_device* vms_dev;

static ssize_t write_vms(struct device* dev,
                         struct device_attribute* attr,
                         const char* buffer, size_t count)
{
   int x,y;
   /* count is not used !? */
   sscanf(buffer, "%d%d", &x, &y);

   input_report_rel(vms_input_dev, REL_X, x);
   input_report_rel(vms_input_dev, REL_Y, y);

   input_sync(vms_input_dev);
   printk("x = %d, y = %d\n", x, y);

   return count;
}

DEVICE_ATTR(coordinates, 0660, NULL, write_vms);

static struct attribute* vms_attr[] = 
{
   &dev_attr_coordinates.attr,
   NULL
};

static struct attribute_group vms_attr_group = 
{
   .attrs = vms_attr,
};


static int vms_open(struct input_dev *dev)
{
	return 0;
}

static void vms_close(struct input_dev *dev)
{
}

int __init vms_init(void)
{
   vms_dev = platform_device_register_simple("vms", -1, NULL, 0);
   if(IS_ERR(vms_dev))
   {
      PTR_ERR(vms_dev);
      printk("vms_init: error\n");
   }

   sysfs_create_group(&vms_dev->dev.kobj, &vms_attr_group);

   vms_input_dev = input_allocate_device();

   if(!vms_input_dev)
   {
      printk("Bad input_alloc_device()\n");
   }

   vms_input_dev->name = "Test";

        /*
   vms_input_dev->name = "vms_input";
   vms_input_dev->open  = vms_open;
   vms_input_dev->close = vms_close;
        */

   //   vms_input_dev->id.bustype = BUS_HOST;

   set_bit(EV_REL, vms_input_dev->evbit);
   set_bit(REL_X, vms_input_dev->relbit);
   set_bit(REL_Y, vms_input_dev->relbit);

   input_set_capability(vms_input_dev, EV_KEY, BTN_LEFT);
   input_set_capability(vms_input_dev, EV_KEY, BTN_MIDDLE);
   input_set_capability(vms_input_dev, EV_KEY, BTN_RIGHT);

   input_register_device(vms_input_dev);

   printk("Virtual Mouse Driver Initialized.\n");

   return 0;
}

void __exit vms_cleanup(void)
{
   input_unregister_device(vms_input_dev);

   sysfs_remove_group(&vms_dev->dev.kobj, &vms_attr_group);

   platform_device_unregister(vms_dev);

   return;
}


module_init(vms_init);
module_exit(vms_cleanup);

MODULE_AUTHOR("Danish Technological Institut");
MODULE_LICENSE("GPL");
