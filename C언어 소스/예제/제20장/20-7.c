#include <stdio.h>

union mem {
	unsigned int  x;
	unsigned char c[4];
};

int main(void)
{
	union mem A;
	union mem B;
	
	A.x = 0x12345678;
	printf("%x\n",A.x);
	printf("%x  %x  %x  %x\n",A.c[0], A.c[1], A.c[2], A.c[3]);
	
	B.c[0] = 0x89;
	B.c[1] = 0x78;
	B.c[2] = 0x56;
	B.c[3] = 0x34;
	printf("%x\n",B.x);
	printf("%x  %x  %x  %x\n",B.c[0], B.c[1], B.c[2], B.c[3]);
	
	return 0;
}

