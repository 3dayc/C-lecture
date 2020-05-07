#include <stdio.h>

int main(void)
{
	int a, b, dece ;
	
	printf("첫 번째 정수를 입력하시오 :");
	scanf("%d", &a);
	 
	printf("두 번째 정수를 입력하시오 :");
	scanf("%d", &b); 
	
	dece = a % b ;
	
	if(dece==0) 
	     printf("약수 입니다.\n");
	else 
	     printf("약수가 아닙니다.\n");  
	
	return 0;
}
