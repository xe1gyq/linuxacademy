#ifndef _BALAMATOR_HARDWARE_H
#define _BALAMATOR_HARDWARE_H

#include <stdint.h>
#include <sys/cdefs.h>
#include <sys/types.h>
#include <hardware/hardware.h>

__BEGIN_DECLS

#define BALAMATOR_HARDWARE_MODULE_ID "balamator"

typedef struct balamator_device_t {

  struct hw_device_t common;

  int (*balamator_on)(struct balamator_device_t* device);
  int (*balamator_off)(struct balamator_device_t* device);

} balamator_device_t;

__END_DECLS

#endif /* End of the _BALAMATOR_HARDWARE_H block */
