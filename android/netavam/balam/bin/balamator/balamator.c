#include <stdio.h>
#include <balamator.h>
#include <hardware/hardware.h>

int main(void)
{
        int status;
	unsigned int output;

	hw_module_t* module;

	status = hw_get_module(BALAMATOR_HARDWARE_MODULE_ID, (hw_module_t const**)&module);
	if (!status) {
		struct balamator_device_t *balamatordev;
		status =  module->methods->open(module, 0, (struct hw_device_t **) &balamatordev);
		if (!status) {
			output = balamatordev->balamator_on(balamatordev);
                        fprintf(stdout, "Balamator Library Interface Value: %ud\n", output);
			balamatordev->common.close((struct hw_device_t *)balamatordev);
		} else {
			fprintf(stderr, "Failed to open Device! Id %d\n", status);
			return 2;
		}
	} else {
		fprintf(stderr, "Failed to get module %s", BALAMATOR_HARDWARE_MODULE_ID);
		return 1;
	}
	return 0;
}

/* End of File */
