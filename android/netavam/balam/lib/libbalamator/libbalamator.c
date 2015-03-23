#include <balamator.h>
#include <fcntl.h>
#include <time.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <cutils/log.h>

static const char BALAMATOR_KERNEL_INTERFACE[] = "/sys/class/net/lo/statistics/tx_bytes";

static int balamator_on_local(struct balamator_device_t* balamatordev)
{
	int fd;
	long int li;
	char value[PAGE_SIZE];

	fd = open(BALAMATOR_KERNEL_INTERFACE, O_RDONLY);
	if (fd < 0)
		return errno;
	read(fd, value, sizeof(value));
	li = atol(value);
	close(fd);
	return(li);
}

static int balamator_off_local(struct balamator_device_t* balamatordev)
{
	return 0;
}

static int balamator_close(hw_device_t *device)
{
    free(device);
    return 0;
}

static int balamator_open(const struct hw_module_t *module, char const *name,
   struct hw_device_t **device) {

    struct balamator_device_t *balamatordev = malloc(sizeof(struct balamator_device_t));
    if (!balamatordev) {
        return -ENOMEM;
    }

    balamatordev->common.tag = HARDWARE_DEVICE_TAG;
    balamatordev->common.module = (hw_module_t *) module;
    balamatordev->common.version = HARDWARE_DEVICE_API_VERSION(1,0);
    balamatordev->common.close = balamator_close;

    balamatordev->balamator_on = balamator_on_local;
    balamatordev->balamator_off = balamator_off_local;

    *device = (hw_device_t *) balamatordev;

    return 0;

}

static struct hw_module_methods_t balamator_module_methods = {
  .open = balamator_open,
};

struct hw_module_t HAL_MODULE_INFO_SYM = {
  .tag = HARDWARE_MODULE_TAG,
  .version_major = 1,
  .version_minor = 0,
  .id = BALAMATOR_HARDWARE_MODULE_ID,
  .name = "Balamator",
  .author = "Netavam Inc.",
  .methods = &balamator_module_methods,
};
