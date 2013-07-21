#include <linux/delay.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>

static int kthread_function(void *unused) {

	int kthread_count = 0;

	while (kthread_count < 5000) {
		msleep(1);
		printk("%s: kthread count %d\n", __func__, kthread_count++);
	}

	return 0;
}

static int __init kthread_init_function(void)
{
	int ret_val;

	printk(KERN_INFO "Kthread? Hello!\n");

	ret_val = kernel_thread(kthread_function, NULL, CLONE_FS);

	return 0;
}

static void __exit kthread_exit_function(void)
{
    printk(KERN_INFO "Goodbye Kthread!\n");
}


MODULE_LICENSE("GPL");
MODULE_AUTHOR("xe1gyq");
MODULE_DESCRIPTION("My First Linux Kernel Kthread Module");

module_init(kthread_init_function);
module_exit(kthread_exit_function);
