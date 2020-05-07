#include <stdio.h>

union mem {
	double  x;
	unsigned char c[8];
};

int main(void)
{
	union mem A;
	union mem B;
	int i;
	
	A.x = -12456.345678;
	printf("%lf\n",A.x);
		for(i = 0 ; i <8 ;i ++ ) {
	  	       printf("A.c[%d] = %x\n",i,A.c[i]);
    }
	
	
	printf("=======================\n");
	
	for(i = 0 ; i <8 ;i ++ ) {
	  	         B.c[i] = A.c[i];
	             printf("B.c[%d] = %x\n",i,B.c[i]);
    }
	
	printf("%lf\n",B.x);
	return 0;
}


