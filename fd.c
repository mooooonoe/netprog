#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 256

void main(void) {
	char buf[BUF_SIZE];
	int fd = open("/dev/pts/0", O_RDWR);
	int ret = read(fd, buf, BUF_SIZE);
	printf("%s\n", buf);
	close(fd);
}