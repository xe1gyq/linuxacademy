#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/timer.h>

char hello_timer_data[] = "yes, data is here!";
static struct timer_list hello_timer_1;
static ulong delay = 5;

static void timer_function(unsigned long data)
{
	printk(KERN_INFO "%s: timeout? %s\n", __func__, (char *) data);
}

static int timer_init_function(void)
{
	int retval;

	printk(KERN_INFO "Timer? Hello! Waiting for timer's timeout ...\n");
	setup_timer(&hello_timer_1, timer_function, \
			(unsigned long) &hello_timer_data);
	retval = mod_timer(&hello_timer_1, \
			jiffies +  msecs_to_jiffies(delay * 1000));
	if (retval)
		printk(KERN_ERR "mod_timer error! retval %i", retval);

	return 0;
}

static void timer_exit_function(void)
{
	printk(KERN_INFO "Timer? Bye!\n");
	del_timer(&hello_timer_1);
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("xe1gyq");
MODULE_DESCRIPTION("My First Linux Kernel Timer Module");

module_init(timer_init_function);
module_exit(timer_exit_function);
