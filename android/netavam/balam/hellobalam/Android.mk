LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE_TAGS := eng
LOCAL_SRC_FILES = hellobalam.c
LOCAL_CFLAGS += -g -O0
LOCAL_MODULE := hellobalam

include $(BUILD_EXECUTABLE)
