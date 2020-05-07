#include <stdio.h>

int main(void)
{
	int n, x ;
    int buff = 1 ;

    printf("n값을 입력하시오 :");
	scanf("%d",&n);
	
	printf("x를 입력하시오 :");
	scanf("%x",&x);
	
	buff = buff << (n-1) ;
	x = x & buff ;
    x = x >>(n-1) ;
	
	printf(" 결과 값 %d 번째 비트는 %d 입니다",n,x);
	return 0 ;
}
