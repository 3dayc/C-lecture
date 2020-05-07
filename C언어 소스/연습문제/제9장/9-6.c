#include <stdio.h>

int main(void)
{
	double x, y ;
	
	printf("실수를  입력하시오 : ");
	scanf("%lf",&x);
	
	y = 3.0*x*x + 7*x + 11;
	printf("다항식의  값은 %.1lf 입니다.",y);
	return 0; 
}
