#include "com_example_balamex_BalamexLib.h"

JNIEXPORT jlong JNICALL Java_com_example_balamex_BalamexLib_balamatorIOn
  (JNIEnv *env, jclass clazz, jlong status) {
	status = 1;
	return status;
}

JNIEXPORT jlong JNICALL Java_com_example_balamex_BalamexLib_balamatorIOff
  (JNIEnv *env, jclass clazz, jlong status){
	status = 0;
	return status;
}
