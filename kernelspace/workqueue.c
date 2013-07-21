#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

char workqueue_data[] = "yes, data is here!";

static struct workqueue_struct *workqueue_id;

static void workqueue_function(struct work_struct *work)
{
	printk(KERN_INFO "%s: any data? %s\n", __func__, (char *) workqueue_data);
}

static DECLARE_WORK(workqueue_work, &workqueue_function);

static int workqueue_init_function(void)
{
	int retval;

	printk(KERN_INFO "Workqueue? Hello! Waiting for workqueue ...\n");
	workqueue_id = create_workqueue("Workqueue");
	if (!workqueue_id)
		return -ENOMEM;

	retval = queue_work(workqueue_id, &workqueue_work);
        if (!retval)
                printk(KERN_INFO "Work in the queue!\n");

	return 0;
}

static void workqueue_exit_function(void)
{
	flush_workqueue(workqueue_id);
	destroy_workqueue(workqueue_id);
	printk(KERN_INFO "Goodbye Workqueue!\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("xeqgyq");
MODULE_DESCRIPTION("My First Linux Kernel Workqueue Module");

module_init(workqueue_init_function);
module_exit(workqueue_exit_function);
