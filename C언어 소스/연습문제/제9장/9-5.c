#include <stdio.h>

int main(void)
{
	double C, F ;
	
	printf("화씨 값을   입력하시오 : ");
	scanf("%lf",&F);
	
	C = (5.0/9.0) * (F-32.0);
	printf("섭씨 값은 %.1lf 입니다.",C);
	return 0; 
}
