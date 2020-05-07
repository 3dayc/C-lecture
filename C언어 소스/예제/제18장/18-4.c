// example 18-4
//
#include <stdio.h>

int main(void)
{
	int a = 10 ;
	int *pA = &a ;
	
	double e = 3.14 ;
	double *pE = &e ;
	
	printf("%d  %f \n",*pA, *pE);
	return 0 ;
}
