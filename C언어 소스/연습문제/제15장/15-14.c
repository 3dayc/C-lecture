#include <stdio.h>

char is_alpha(char);

int main(void)
{
	char ch, trch ;
	
	printf("���� �빮��, �Ǵ� �ҹ��ڸ� �Է��Ͻÿ�: ");
	scanf("%c",&ch);
	
	trch = is_alpha(ch);
	
	printf(" ��� �� : %c", trch);
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
	
