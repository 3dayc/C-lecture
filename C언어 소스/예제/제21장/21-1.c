#include <stdio.h>

#define PI 3.141592

int main(void)
{
	float r, area ;
	
	printf("원의 반지름을 입력하시오 :");
	scanf("%f",&r);
	
	area = r *r * PI ;
	
	printf("원의 면적은 %f 입니다\n",area);
	return 0;
}
