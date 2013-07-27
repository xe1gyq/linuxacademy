#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static struct termios oldterminfo;

void closeserial(int fd)
{
	tcsetattr(fd, TCSANOW, &oldterminfo);
	if (close(fd) < 0)
		perror("closeserial()");
}


int openserial(char *devicename, int seconds)
{
	int fd;
	struct termios attr;

	if ((fd = open(devicename, O_RDWR)) == -1) {
		perror("openserial(): open()");
		return 0;
	}

	if (tcgetattr(fd, &oldterminfo) == -1) {
		perror("openserial(): tcgetattr()");
		return 0;
	}
	attr = oldterminfo;
	attr.c_cflag |= CRTSCTS | CLOCAL;
	attr.c_oflag = 0;

	if (tcflush(fd, TCIOFLUSH) == -1) {
		perror("openserial(): tcflush()");
		return 0;
	}

	sleep(seconds);

	if (tcsetattr(fd, TCSANOW, &attr) == -1) {
		perror("initserial(): tcsetattr()");
		return 0;
	}
	return fd;
}

int main(int argc, char *argv[])
{
	int arg_seconds;
	int fd;
	char *serialdev = "/dev/ttyS0";

	if(argc > 1) {
		arg_seconds=atoi(argv[1]);
	}
	else {
		printf("Please introduce the sleep time in seconds: ./serial X \n");
		return 1;
	}

	fd = openserial(serialdev, arg_seconds);
	if (!fd) {
		fprintf(stderr, "Error while initializing %s.\n", serialdev);
		return 1;
	}

	closeserial(fd);
	return 0;
}
