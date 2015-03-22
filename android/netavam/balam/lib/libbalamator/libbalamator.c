#define LOG_NDEBUG 1
#define LOG_TAG "balamator"
#define LOG_ID LOG_ID_MAIN

#include <balamator.h>
#include <fcntl.h>
#include <time.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/ioctl.h>

static const char BALAMATOR_TEMP[] = "/sys/kernel/balamator/status";

static int balamator_on(struct balamator_device_t* balamdev, unsigned int status)
{
	int fd;
	int len;
	int ii;
	char value[PAGE_SIZE];
	fd = open(BALAMATOR_TEMP, O_RDONLY);
	if (fd < 0)
		return errno;
	len = read(fd, value, sizeof(value));
	ii = atoi(value);
	close(fd);
	return(ii);
}

static int balamator_off(struct balamator_device_t* balamdev, unsigned int status)
{
	return 0;
}

static int open_balamator(const struct hw_module_t *module, char const *name,
   struct hw_device_t **device) {

    struct balamator_device_t *dev = malloc(sizeof(struct balamator_device_t));
    if (!dev) {
        return -ENOMEM;
    }

    return 0;
  }


static struct hw_module_methods_t balamator_module_methods = {
  .open = open_balamator,                                            /* <6> */
};

struct hw_module_t HAL_MODULE_INFO_SYM = {                         /* <7> */
  .tag = HARDWARE_MODULE_TAG,
  .version_major = 1,
  .version_minor = 0,
  .id = BALAMATOR_HARDWARE_MODULE_ID,                                /* <3> */
  .name = "balamator",
  .author = "Netavam Inc.",
  .methods = &balamator_module_methods,                              /* <6> */
};
