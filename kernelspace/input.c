#include <linux/init.h>
#include <linux/input.h>
#include <linux/interrupt.h>
#include <linux/kernel.h>
#include <linux/module.h>

#define BUTTON_IRQ 10
static struct input_dev *button_dev;

static irqreturn_t button_interrupt(int irq, void *dummy)
{
	input_report_key(button_dev, BTN_0, 1);
	input_sync(button_dev);

	return IRQ_HANDLED;
}

static int input_init_function(void)
{
	int error;
	int return_irq;

	printk(KERN_INFO "Input? Hello!\n");

	button_dev = input_allocate_device();
	if (!button_dev) {
		printk(KERN_ERR "Hello Module: Insufficient memory\n");
		input_free_device(button_dev);
		return -ENOMEM;
	}

	button_dev->name = "input_module";
	button_dev->id.bustype = BUS_HOST;
	button_dev->id.vendor = 0x0001;
	button_dev->id.product = 0x0001;
	button_dev->id.version = 0x0001;

	return_irq = request_irq(BUTTON_IRQ, button_interrupt, 0, "input_irq", NULL);
        if (return_irq) {
                printk(KERN_ERR "Input Module: irq %d cannot be allocated\n", BUTTON_IRQ);
                error = -EBUSY;
		goto err_free_dev;
        }

	error = input_register_device(button_dev);
	if (error) {
		printk(KERN_ERR "Input Module: Failed to register device\n");
		goto err_free_irq;
	}

	return 0;

err_free_irq:
	free_irq(BUTTON_IRQ, button_interrupt);
err_free_dev:
        input_free_device(button_dev);
	return error;
}

static void input_exit_function(void)
{
	free_irq(BUTTON_IRQ, button_interrupt);
	input_unregister_device(button_dev);
	printk(KERN_INFO "Goodbye Input!\n");
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("xe1gyq");
MODULE_DESCRIPTION("My First Linux Kernel Input Subsystem Module");

module_init(input_init_function);
module_exit(input_exit_function);
