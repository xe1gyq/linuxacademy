#include <linux/module.h>
#include <linux/gpio.h>
#include <linux/gpio.h>

static int gpio_pins[] = {0};

#define LED_PINS_NUMBER (ARRAY_SIZE(gpio_pins))

static int __init gpio_module_init(void)
{
	int i;

	printk(KERN_INFO "GPIO? Hello!\n");

	for (i = 0; i < LED_PINS_NUMBER; i++) {
		gpio_request_one(gpio_pins[i], GPIOF_DIR_OUT | GPIOF_INIT_LOW, "gpio_pin");
		gpio_direction_output(gpio_pins[i], 1);
	}

	return 0;
}


static void __exit gpio_module_exit(void)
{
	int i;

	printk(KERN_INFO "GPIO? Hello!\n");

	for (i = 0; i < LED_PINS_NUMBER; i++) {
		gpio_direction_output(gpio_pins[i], 0);
		gpio_free(gpio_pins[i]);
	}
}

module_init(gpio_module_init);
module_exit(gpio_module_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("xe1gyq");
MODULE_DESCRIPTION("My First GPIO Module");

