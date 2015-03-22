LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE_TAGS := optional
LOCAL_SRC_FILES := com_netavam_android_lib_balam_LibBalam.cpp
LOCAL_C_INCLUDES += $(JNI_H_INCLUDE) $(LOCAL_PATH)/../../../include/
LOCAL_CFLAGS += -g -O0 -Wno-unused-parameter
LOCAL_SHARED_LIBRARIES := libcutils libhardware libnativehelper
LOCAL_MODULE := libbalamator_jni

include $(BUILD_SHARED_LIBRARY)
