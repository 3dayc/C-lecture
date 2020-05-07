#include <stdio.h>

int main(void)
{
	int x ;
	printf("x를 입력하시오 :");
	scanf("%x",&x);
	
	x = x & 0x02 ;
    x = x >>1 ;
	
	printf("결과 값 두번째 비트는 %d 입니다",x);
	return 0 ;
}
