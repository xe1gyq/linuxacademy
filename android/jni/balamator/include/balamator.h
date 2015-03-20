#ifndef _BALAMATOR_INTERFACE_H
#define _BALAMATOR_INTERFACE_H

#include <stdint.h>
#include <sys/cdefs.h>
#include <sys/types.h>
#include <hardware/hardware.h>
#include <log/log.h>
#include <log/logger.h>   

__BEGIN_DECLS

#define BALAMATOR_HARDWARE_MODULE_ID "balamator"

struct balamator_device;
typedef struct balamator_device {
  /*
   * Common HAL device structure.
   * Always placed at the head of the module definition.
   */
  struct hw_device_t common;

  int (*balamator_on)(struct balamator_device* dev, unsigned int status);
  int (*balamator_off)(struct balamator_device* dev);
} balamator_device_t;

__END_DECLS

#endif /* End of the _BALAMATOR_INTERFACE_H block */
