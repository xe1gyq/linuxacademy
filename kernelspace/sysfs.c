#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/platform_device.h>

static struct class *sysfs_class;

static int sysfs_init_function(void)
{
	printk(KERN_INFO "Sysfs? Hello!\n");
	sysfs_class = class_create(THIS_MODULE, "sysfs_module");
	return 0;
}

static void sysfs_exit_function(void)
{
	class_destroy(sysfs_class);
	printk(KERN_INFO "Goodbye Sysfs!\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("xe1gyq");
MODULE_DESCRIPTION("My First Linux Kernel Sysfs Module");

module_init(sysfs_init_function);
module_exit(sysfs_exit_function);
