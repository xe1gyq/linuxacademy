/*
 * seabass-leds board file
 * Copyright (c) 2014, M J Oldfield
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * Author: Martin Oldfield <seabass-2014-12@mjoldfield.com>
 */

#define pr_fmt(fmt) "seabass: " fmt

#include <linux/platform_device.h>
#include <linux/module.h>

#include <linux/leds.h>
 
/* GPIO LED */
#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
static struct gpio_led seabass_led[] = {
  {
    .name = "seabass:red:user",
    .default_trigger = "heartbeat",
    .gpio = 472,
    .active_low = 1,
  },
  {
    .name = "seabass:yellow:user",
    .default_trigger = "none",
    .gpio = 473,
    .active_low = 1,
  },
  {
    .name = "seabass:green:user",
    .default_trigger = "none",
    .gpio = 475,
    .active_low = 1,
  },
};
 
static struct gpio_led_platform_data seabass_led_data = {
  .num_leds= ARRAY_SIZE(seabass_led),
  .leds= seabass_led
};
 
static struct platform_device seabass_led_dev = {
  .name= "leds-gpio",
  .id= -1,
  .dev= {
    .platform_data= &seabass_led_data,
  },
};
#endif

static int __init seabass_init(void)
{
  int stat = 0;

  pr_info("module init\n");

#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
  stat = platform_device_register(&seabass_led_dev);
  pr_info("led init stat = %d\n", stat);
#endif

  return stat;
}

static void __exit seabass_exit(void)
{
  pr_info("module exit\n");

#if defined(CONFIG_LEDS_GPIO) || defined(CONFIG_LEDS_GPIO_MODULE)
  platform_device_unregister(&seabass_led_dev);
  pr_info("led exit\n");
#endif
}

module_init(seabass_init);
module_exit(seabass_exit);

MODULE_DESCRIPTION("Seabass LED driver");
MODULE_AUTHOR("Martin Oldfield");
MODULE_LICENSE("GPL");
