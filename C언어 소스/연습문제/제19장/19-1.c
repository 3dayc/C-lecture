#include <stdio.h>

int main(void)
{
	char ch ;
	printf("문자나 숫자를 입력하시오 :");
	scanf("%c",&ch);
	
	printf(" 아스키 코드 값 (10진, 16진) :%d  %x\n",ch,ch);
	
 return 0;
}
