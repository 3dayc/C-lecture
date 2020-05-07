#include <stdio.h>

int main(void)
{
	int num ;
	printf(" 정수를 입력하시오: ");
	scanf("%d",&num);
	
	if(num %2 == 0 )
	    printf("입력된 정수는 짝수 입니다.\n");
	else 
	    printf("입력된 정수는 홀수 입니다.\n");	  
	
	return 0;
}
