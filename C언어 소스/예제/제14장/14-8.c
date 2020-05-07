#include <stdio.h>

int main(void)
{
	int i=0, n=0, sum=0 ;
	
	
	while(i < 5)
	{
		printf("값을 입력하시오:");
		scanf("%d",&n);
		sum = sum + n ;
		i++ ;
    }
    printf("합계는 %d 입니다.\n",sum);
	return 0;
}

