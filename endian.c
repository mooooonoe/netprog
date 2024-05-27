#include <stdio.h>

void main(void) {
	int x = 0x12345678;
	int* addr;
	addr = &x;
	printf("%x %x %x\n",
		*(unsigned char*)addr,
		*((unsigned char*)addr + 1),
		*((unsigned char*)addr + 2),
		*((unsigned char*)addr + 3));

}