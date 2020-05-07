#include <stdio.h>

#define SIZE 5
int main(void)
{
	int num[SIZE] ;
	int i;
	
	for( i = 0 ; i < SIZE ; i ++ )
	{
		printf("%d 번째 정수를 입력하시오: ",i);
		scanf("%d",&num[i]);
    }
    
    for(i = SIZE - 1 ; i >= 0  ; i-- )
    {
    	printf(" %d번째 정수 =>   %d \n",i, num[i]);
    }
    
    return 0;
}
