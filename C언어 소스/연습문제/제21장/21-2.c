#include <stdio.h>
#define RectRound(x) (4.0*x)

int main(void)
{
	float d ;
	printf("정사각형의 한변의 길이를 입력하시오:");
	scanf("%f",&d);
	 
	printf("정사각형의 둘레는 %f 입니다\n",RectRound(d));
	return 0;
}
