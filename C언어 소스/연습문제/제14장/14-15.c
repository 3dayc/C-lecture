#include <stdio.h>

int main(void)
{
	int i=0, n=0 ;
	int sum = 0 ;
	
	printf("n의 값을 입력하시오 :");
	scanf("%d",&n);
	
	for(i = 1; i <=n ; i++ ) {
	  sum = sum + i * i ;
    }
    
    printf("계산 값은 %d 입니다.\n",sum);
	return 0;
}
