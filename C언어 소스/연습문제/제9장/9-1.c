#include <stdio.h>

int main(void)
{
	double  w, h ;
	double Circumference, Area ;
	
	printf(" 직사각형의 가로의 길이를 입력하시오==> "); 
	scanf("%lf",&w);
	printf(" 직사각형의 세로의 길이를 입력하시오==> "); 
	scanf("%lf",&h);
	
	Circumference = 2*w +2*h ;
	Area = w *h ;
	
	printf("직사각형의 둘레: %lf, 면적 : %lf \n",Circumference, Area);
	return 0;
}
	
	
