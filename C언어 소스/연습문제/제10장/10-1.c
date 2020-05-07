#include <stdio.h>

int main(void)
{
	int x ;
	
	printf("정수를 입력하시오:");
	scanf("%d",&x);
	printf("입력된 정수는 10진 :%d, 16진 : %X 입니다\n",x,x);
	printf("입력된 정수의 전체 비트 반전 값은(16진): %X\n",~x);
	 
	x = (~x) + 1 ;
	printf("전체 비트 반전값 +1 = %d(10진), %X(16진)\n",x,x); 
	printf("2의보수 :%d\n",x);
	return 0 ;
}
	 
	
