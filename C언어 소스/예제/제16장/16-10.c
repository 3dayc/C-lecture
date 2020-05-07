#include <stdio.h>

long factorial (int) ;

int main(void)   
{
	int num ;
	long int result ;
	
	printf("수를 입력하시오 :");
	scanf("%d",&num);
	
	result = factorial(num);
	printf("result = %d\n",result);
	
	return 0;
}

long factorial(int n)
{
	printf("factoral (%d)\n",n);
	
	if( n <=1) return 1;
	else return n* factorial(n-1);
}
	
	
	
	 
