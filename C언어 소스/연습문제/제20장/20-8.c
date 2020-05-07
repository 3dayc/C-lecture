#include <stdio.h>

union mem {
	float  x; // 4byte 
	unsigned char c[4]; //4byte
};

int main(void)
{
	union mem A;
	union mem B;
	
	A.x = -12.34;
	printf("%f\n",A.x);
	printf("%x  %x  %x  %x\n",A.c[0], A.c[1], A.c[2], A.c[3]);
	
	
	printf("=======================\n");
	B.c[0] = A.c[0];
	B.c[1] = A.c[1];
	B.c[2] = A.c[2];
	B.c[3] = A.c[3];
	
	printf("%x  %x  %x  %x\n",B.c[0], B.c[1], B.c[2], B.c[3]);
	printf("%f\n",B.x);
	return 0;
}


