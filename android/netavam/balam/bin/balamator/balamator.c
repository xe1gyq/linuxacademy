#include <stdio.h>

#include <balamator.h>
#include <hardware/hardware.h>

int main(int argc, char* argv[])
{
	printf("Hello Balam!\n");
	hw_module_t* module;
	int ret = hw_get_module(BALAMATOR_HARDWARE_MODULE_ID, (hw_module_t const**)&module);
	if (ret ==0) {
		struct balamator_device_t *dev;
		ret =  module->methods->open(module, 0, (struct hw_device_t **) &dev);
		if (ret == 0) {
			printf("Hello Balam Device Opened!\n");
			ret = 0;
			dev->common.close((struct hw_device_t *)dev);
		} else {
			fprintf(stderr, "Failed to open Device! Id %d\n", ret);
			ret = 2;
		}
	} else {
		fprintf(stderr, "Failed to get module %s", BALAMATOR_HARDWARE_MODULE_ID);
		ret = 1;
	}
	return 0;
}

/* End of File */
