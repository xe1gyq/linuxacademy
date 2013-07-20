#include <linux/init.h>
#include <linux/interrupt.h>
#include <linux/kernel.h>
#include <linux/module.h>

char hello_tasklet_data[]="yes, data is here!";

void tasklet_function(unsigned long data)
{
	printk(KERN_INFO "%s: data? %s", __func__, (char *)data);
}

DECLARE_TASKLET(tasklet_name,  tasklet_function,
		(unsigned long) &hello_tasklet_data);

static int tasklet_initialization(void)
{
	printk(KERN_INFO "Tasklet? Hello! Waiting for tasklet's data ...\n");
	tasklet_schedule(&tasklet_name);
	return 0;
}

static void tasklet_exit(void)
{
	tasklet_kill(&tasklet_name);
	printk(KERN_INFO "Tasklet? Bye!\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("xe1gyq");
MODULE_DESCRIPTION("My First Linux Kernel Tasklet");

module_init(tasklet_initialization);
module_exit(tasklet_exit);
