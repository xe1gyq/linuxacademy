LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_SRC_FILES = hellobalam.c
LOCAL_MODULE = HelloBalam
LOCAL_MODULE_TAGS = eng

include $(BUILD_EXECUTABLE)
