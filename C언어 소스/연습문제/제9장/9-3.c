#include <stdio.h>

int main(void)
{
	double meter, mile ;
	
	printf("마일값을 입력하시오 :");
	scanf("%lf",&mile);
	
	meter = 1609.0 * mile ;
	
	printf(" Meter = %.2lf ",meter);
	return 0 ;
}
