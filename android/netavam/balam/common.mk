# Include all makefiles in sub-directories (one level deep)
include $(call all-subdir-makefiles)

DEVICE_PACKAGE_OVERLAYS := $(LOCAL_PATH)/overlay

