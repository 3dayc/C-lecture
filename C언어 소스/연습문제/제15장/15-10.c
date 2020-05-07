#include <stdio.h>

int is_sum(int, int);

int main(void)
{
	int a, b;
	int sum ;
	
	printf("두 정수를 입력하시오 :");
	scanf("%d %d",&a, &b);
	
	sum = is_sum(a, b); 
	
	printf("두 정수 사이의 합은 %d 입니다.\n",sum); 
	
	return 0;
}

int is_sum(int x1, int x2)
{
	int i ;
    int s=0 ;
    
	for(i=x1; i<=x2; i++ )
	   s = s + i ;
	
	return s;
}
	
	
