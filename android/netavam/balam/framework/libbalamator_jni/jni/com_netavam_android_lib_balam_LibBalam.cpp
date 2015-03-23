#include <jni.h>
#include <balamator.h>
#include <hardware/hardware.h>
#include "JNIHelp.h"

static const char * class_name = "com/netavam/android/lib/balam/LibBalam";

static balamator_device_t *device;

static void throwLibBalamException(JNIEnv *env, const char *msg) {
  jniThrowException(env, "com/netavam/android/lib/balam/LibBalamException", msg);
}

static void native_init(JNIEnv *env, jobject object) {
  hw_module_t* module;
  int err = hw_get_module(BALAMATOR_HARDWARE_MODULE_ID, (hw_module_t const**)&module);
  if (err) {
    throwLibBalamException(env, "Failed to get module");
  } else {
    struct balamator_device_t *dev;
    err = module->methods->open(module, 0, (struct hw_device_t **) &dev);
    if (err) {
      throwLibBalamException(env, "Failed to open device");
    } else {
      device = dev;
    }
  }
}

static void native_close(JNIEnv *env, jobject object) {
  if (device) {
    device->common.close((struct hw_device_t *)device);
    device = NULL;
  }
}

static struct balamator_device_t * getDevice(JNIEnv *env, jobject object) {
  if (device) {
    return device;
  }
  throwLibBalamException(env, "Not initialized or closed");
  return NULL;
}

static jint balamatorOn(JNIEnv *env, jobject object) {
  struct balamator_device_t *dev = getDevice(env, object);
  int ret = 0;
  if (dev) {
    ret = dev->balamator_on(dev);
    if (ret < 0) {
      throwLibBalamException(env, "Failed to get On value");
    }
  }
  return ret;
}

static jint balamatorOff(JNIEnv *env, jobject object) {
  struct balamator_device_t *dev = getDevice(env, object);
  int ret = 0;
  if (dev) {
    ret = dev->balamator_off(dev);
    if (ret < 0) {
      throwLibBalamException(env, "Failed to get Off state");
    }
  }
  return ret;
}

static JNINativeMethod method_table[] = {
  { "init", "()V", (void *) native_init },
  { "close", "()V", (void *) native_close },
  { "balamatorOn", "()I", (void *) balamatorOn },
  { "balamatorOff", "()I", (void *) balamatorOff }
};

extern "C" jint JNI_OnLoad(JavaVM* vm, void* reserved) {
  JNIEnv* env = NULL;
  if (vm->GetEnv((void**) &env, JNI_VERSION_1_6) == JNI_OK) {
    if (jniRegisterNativeMethods(env, class_name, method_table, NELEM(method_table)) == 0) {
      return JNI_VERSION_1_6;
    }
  }
  return JNI_ERR;
}
