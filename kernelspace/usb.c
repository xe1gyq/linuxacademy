#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/usb.h>
#include <linux/slab.h>

#define VENDOR_ID	0x0900
#define PRODUCT_ID	0x0001

static struct usb_device_id id_table[] = {
	{ USB_DEVICE(VENDOR_ID, PRODUCT_ID) },
	{ },
};
MODULE_DEVICE_TABLE(usb, id_table);

struct usblearn {
	struct usb_device *udev;
	int temp;
};

static int usblearn_probe(struct usb_interface *interface,
			const struct usb_device_id *id)
{
	struct usb_device *udev = interface_to_usbdev(interface);
	struct usblearn *usbdev;

	usbdev = kzalloc(sizeof(struct usblearn), GFP_KERNEL);
	if (usbdev == NULL) {
		dev_err(&interface->dev, "No available memory\n");
		return -ENOMEM;
	}

	usbdev->udev = usb_get_dev(udev);

	usb_set_intfdata(interface, usbdev);

	dev_info(&interface->dev, "USB? Hello!\n");
	return 0;
}

static void usblearn_disconnect(struct usb_interface *interface)
{
	struct usblearn *usbdev;

	usbdev = usb_get_intfdata(interface);
	usb_set_intfdata(interface, NULL);

	usb_put_dev(usbdev->udev);

	kfree(usbdev);

	dev_info(&interface->dev, "Goodbye USB!\n");
}

static struct usb_driver usblearn_driver = {
	.name =		"usblearn",
	.probe =	usblearn_probe,
	.disconnect =	usblearn_disconnect,
	.id_table =	id_table,
};

static int __init usb_init_function(void)
{
	return usb_register(&usblearn_driver);
}

static void __exit usb_exit_function(void)
{
	usb_deregister(&usblearn_driver);
}

module_init(usb_init_function);
module_exit(usb_exit_function);

MODULE_AUTHOR("xe1gyq");
MODULE_DESCRIPTION("My First Linux Kernel USB Module");
MODULE_LICENSE("GPL");
