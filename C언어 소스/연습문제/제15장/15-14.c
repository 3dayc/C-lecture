#include <stdio.h>

char is_alpha(char);

int main(void)
{
	char ch, trch ;
	
	printf("영문 대문자, 또는 소문자를 입력하시오: ");
	scanf("%c",&ch);
	
	trch = is_alpha(ch);
	
	printf(" 결과 값 : %c", trch);
	return 0;
}

char is_alpha(char c)
{
	char ch1 ;
	
	if(c >= 'a' && c <='z') ch1 = c -32;
	else if( c >= 'A' && c <='Z' ) ch1 = c +32 ;
	else ch1 =c ;

    return ch1;
}
	
