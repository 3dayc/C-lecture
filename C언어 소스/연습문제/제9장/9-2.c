#include <stdio.h>

int main(void)
{
	float a, b, c ;
	float sum, ave ;
	
	printf("실수를 입력하시오 :");
	scanf("%f",&a);
	
	printf("실수를 입력하시오 :");
	scanf("%f",&b);
	
	printf("실수를 입력하시오 :");
	scanf("%f",&c);
	 
	sum = a + b + c ;
	ave = sum /3. ;
	
	printf("합계는 %.1f 이고 평균값은 %.1f이다",sum,ave);
	return 0 ;
}

