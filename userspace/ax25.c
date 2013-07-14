#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/socket.h>

#include <netax25/axlib.h>
#include <netax25/axconfig.h>

int main(int argc, char *argv[])
{
	struct full_sockaddr_ax25 dest;
	struct full_sockaddr_ax25 src;
	int mysocket, myarguments, dlen, len;
	char addr[20], *myport, *message, *portcall;
	char *srccall = NULL, *destcall = NULL;

	while ((myarguments = getopt(argc, argv, "c:d:t:v")) != -1) {
		switch (myarguments) {
			case 'c':
				srccall = optarg;
				break;
			case 'd':
				destcall = optarg;
				break;
			case 'v':
				printf("myax25app: %s\n", "0.1");
				return 0;
			case '?':
			case ':':
				fprintf(stderr, "usage: ax25 [-c <source>] [-d <destination>] [-v] <ax25port> <message>\n");
				return 1;
		}
	}

	if (optind == argc || optind == argc - 1) {
		fprintf(stderr, "usage: ax25 [-c <source>] [-d <destination>] [-v] <ax25port> <message>\n");
		return 1;
	}

	myport    = argv[optind];
	message = argv[optind + 1];

	if (ax25_config_load_ports() == 0) {
		fprintf(stderr, "beacon: no AX.25 ports defined\n");
		return 1;
	}
 
	if ((portcall = ax25_config_get_addr(myport)) == NULL) {
		fprintf(stderr, "beacon: invalid AX.25 port setting - %s\n", myport);
		return 1;
	}
 
	if (destcall != NULL)
		strcpy(addr, destcall);
	else
		strcpy(addr, "IDENT");

	if ((dlen = ax25_aton(addr, &dest)) == -1) {
		fprintf(stderr, "beacon: unable to convert callsign '%s'\n", addr);
		return 1;
	}

	if (srccall != NULL && strcmp(srccall, portcall) != 0)
		sprintf(addr, "%s %s", srccall, portcall);
	else
		strcpy(addr, portcall);

	if ((len = ax25_aton(addr, &src)) == -1) {
		fprintf(stderr, "beacon: unable to convert callsign '%s'\n", addr);
		return 1;
	}

	if ((mysocket = socket(AF_AX25, SOCK_DGRAM, 0)) == -1) {
		return 1;
	}

	if (bind(mysocket, (struct sockaddr *)&src, len) == -1) {
		return 1;
	}

	if (sendto(mysocket, message, strlen(message), 0, (struct sockaddr *)&dest, dlen) == -1) {
		return 1;
	}

	close(mysocket);

	return 0;
}

/* End of file */
