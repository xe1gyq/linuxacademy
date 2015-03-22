#include "com_example_balamex_BalamexLib.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BALAMATOR_TEMP "/sys/class/net/eth0/statistics/rx_bytes"

JNIEXPORT jlong JNICALL Java_com_example_balamex_BalamexLib_balamatorIOn
  (JNIEnv *env, jclass clazz, jlong status) {
	int fd;
	int len;
	long int li;
	char value[PAGE_SIZE];
	fd = open(BALAMATOR_TEMP, O_RDONLY);
	if (fd < 0)
		return errno;
	len = read(fd, value, sizeof(value));
	li = atol(value);
	close(fd);
	return(li);
}

JNIEXPORT jlong JNICALL Java_com_example_balamex_BalamexLib_balamatorIOff
  (JNIEnv *env, jclass clazz, jlong status){
	status = 0;
	return status;
}
