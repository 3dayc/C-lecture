#include <stdio.h>

int main(void)
{
	int x1, x2, x3, x4 ;
	unsigned int buff ;
	unsigned int result =0 ;
	
	printf("ù ��° ���� :");
	scanf("%x",&x1);
	
	printf("�� ��° ���� :");
	scanf("%x",&x2);
	
	printf("�� ��° ���� :");
	scanf("%x",&x3);
	
	printf("�� ��° ���� :");
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
