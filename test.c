#include <stdio.h>

void main(void) {
	int x = 0x12345678;
	int* addr;
	addr = &x;

	printf("%x %x", * (unsigned char*)addr, *((unsigned char*)addr + 1));
}