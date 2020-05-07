#include <stdio.h>

#define Circle_AREA(x) (x)*(x)*3.141592

int main(void)
{
	float r ;
	printf("원의 반지름을 입력하시오 :"); 
	scanf("%f",&r);
	printf("원의 면적은 = %f\n",Circle_AREA(r));
	return 0;
}

