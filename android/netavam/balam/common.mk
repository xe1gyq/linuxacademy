# Include all makefiles in sub-directories (one level deep)
include $(call all-subdir-makefiles)

DEVICE_PACKAGE_OVERLAYS := $(LOCAL_PATH)/overlay

# Enable our custom kernel
LOCAL_KERNEL := $(LOCAL_PATH)/kernel
PRODUCT_COPY_FILES += $(LOCAL_KERNEL):kernel
