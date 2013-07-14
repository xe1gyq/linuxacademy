#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <linux/rtc.h>

int main(int argc, char *argv[])
{
	int fd;
	int retval;
	struct rtc_time rtc_tm;

	fd = open("/dev/rtc0", O_RDONLY);
	if (!fd) {
		perror("Real Time Clock: Device could not be opened!");
		_exit(errno);
	}

	retval = ioctl(fd, RTC_RD_TIME, &rtc_tm);
	if (retval) {
		perror("Real Time Clock: RTC_RD_TIME ioctl error!\n");
		_exit(errno);
	}

	fprintf(stdout, "Real Time Clock: Date %d-%d-%d <> Time %02d:%02d:%02d\n",
	rtc_tm.tm_mday, rtc_tm.tm_mon + 1,
	rtc_tm.tm_year + 1900,
	rtc_tm.tm_hour, rtc_tm.tm_min,
	rtc_tm.tm_sec);
	fflush(stdout);

	close(fd);
	exit(0);
}
