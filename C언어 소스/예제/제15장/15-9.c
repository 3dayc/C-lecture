#include <stdio.h>
#include <math.h>

int main(void)
{
	double pi = 3.141592;
	double radian, x;
	
	printf(" sin, cos, tan 각도를 입력하시오:");
	scanf("%lf",&x);
	
	radian =  (pi/ 180) * x ;
		
	printf("sin(x)= %f  cos(x)= %f tan(x) = %f\n",
	          sin(radian),cos(radian),tan(radian));
	return 0;
}
