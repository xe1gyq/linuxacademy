# Include the common definitions and packages
include $(LOCAL_PATH)/common.mk

# Inherit from the emulator product, which defines the base OS
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_x86.mk)

# Discard inherited values and use our own instead
PRODUCT_NAME := full_balam
PRODUCT_DEVICE := balam
PRODUCT_MODEL := Full Balam Image for Emulator
