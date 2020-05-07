//example 18-2
//
#include <stdio.h>

int main(void)
{
	int a =2005;
	
	// int *pA = &a ;
	
	 int *pA;
  	 pA = &a;
	
	printf("%d  %d\n",a,&a);
	printf("pA = %d %d  ",pA,*pA);
	
 return 0 ;
}
