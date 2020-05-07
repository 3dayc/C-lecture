#include <stdio.h>

int main(void)
{
	int x ;
	int times ;
	int result ;
	
	printf("정수를 입력하시오 :");
	scanf("%d",&x);
	
	printf("2를 곱하고 싶은 횟수:");
	scanf("%d",&times);
	
	result = x << times ;
	printf("%d << %d의 값 : %d",x,times, result); 
	return 0;
}
