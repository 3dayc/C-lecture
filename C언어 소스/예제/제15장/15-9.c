#include <stdio.h>
#include <math.h>

int main(void)
{
	double pi = 3.141592;
	double radian, x;
	
	printf(" sin, cos, tan ������ �Է��Ͻÿ�:");
	scanf("%lf",&x);
	
	radian =  (pi/ 180) * x ;
		
	printf("sin(x)= %f  cos(x)= %f tan(x) = %f\n",
	          sin(radian),cos(radian),tan(radian));
	return 0;
}
