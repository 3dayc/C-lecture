#include <stdio.h>

int main(void)
{
	double meter, mile ;
	
	printf("���ϰ��� �Է��Ͻÿ� :");
	scanf("%lf",&mile);
	
	meter = 1609.0 * mile ;
	
	printf(" Meter = %.2lf ",meter);
	return 0 ;
}
