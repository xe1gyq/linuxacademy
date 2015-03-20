#include <linux/kobject.h>
#include <linux/string.h>
#include <linux/sysfs.h>
#include <linux/module.h>
#include <linux/init.h>

static int status;

/*
 * The "foo" file where a static variable is read from and written to.
 */
static ssize_t status_show(struct kobject *kobj, struct kobj_attribute *attr,
			char *buf)
{
	return sprintf(buf, "%d\n", status);
}

static ssize_t status_store(struct kobject *kobj, struct kobj_attribute *attr,
			 const char *buf, size_t count)
{
	sscanf(buf, "%du", &status);
	return count;
}

static struct kobj_attribute status_attribute =
	__ATTR(status, 0777, status_show, status_store);

static struct attribute *attrs[] = {
	&status_attribute.attr,
	NULL,
};

static struct attribute_group attr_group = {
	.attrs = attrs,
};

static struct kobject *balam_kobj;

static int __init balam_init(void)
{
	int retval;

	balam_kobj = kobject_create_and_add("balamator", kernel_kobj);
	if (!balam_kobj)
		return -ENOMEM;

	/* Create the files associated with this kobject */
	retval = sysfs_create_group(balam_kobj, &attr_group);
	if (retval)
		kobject_put(balam_kobj);

	return retval;
}

static void __exit balam_exit(void)
{
	kobject_put(balam_kobj);
}

module_init(balam_init);
module_exit(balam_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Abraham Arce <xe1gyq@gmail.com>");
