#include <stdio.h>

int main(void)
{
	int x1, x2, x3, x4 ;
	unsigned int buff ;
	unsigned int result =0 ;
	
	printf("첫 번째 숫자 :");
	scanf("%x",&x1);
	
	printf("두 번째 숫자 :");
	scanf("%x",&x2);
	
	printf("세 번째 숫자 :");
	scanf("%x",&x3);
	
	printf("네 번째 숫자 :");
	scanf("%x",&x4);
	 
	buff = x1 ; 
	result = result | buff ;
	
	buff = x2 ;
	buff = buff << 8 ;
	result = result | buff ;
	
	buff = x3 ;
	buff = buff <<16 ;
	result = result | buff ;

	buff = x4 ;
	buff = buff << 24  ;
	result = result | buff ;
	


	printf("result = %X",result);
	return 0 ;
}
