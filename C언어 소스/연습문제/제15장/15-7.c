#include <stdio.h>

double f_to_c(double) ;

int main(void)
{
	double F, C ; 
	
	printf("화씨 온도를 입력하시오 : ");
	scanf("%lf",&F);
	
	C = f_to_c(F);
	
	printf("섭씨 온도로 변환한 값은 %.2f 입니다",C);
	return 0;
}

double f_to_c(double fx)
{
	double cx ;
	cx= 5.0/9.0 * (fx-32.0); 
	
	return cx;
}
	
