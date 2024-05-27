#include <stdio.h>

void main(void) {
	union endian {
		unsigned char c;
		unsigned short s;
		unsigned int i;
	};
	union endian e;
	e.i = 0x12345678;
	printf("%x %x %x\n", e.c, e.s, e.i);
}