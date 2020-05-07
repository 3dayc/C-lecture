#include <stdio.h>

int str_chr(char [], char);

int main(void)
{
	char s[30];
	char ch;
	int n ;
	
	printf("문자열을 입력하시오 :");
	gets(s);
	
	printf("개수를 셀 문자를 입력하시오:");
	scanf("%c",&ch);
	 
    n = str_chr(s, ch);

    printf("%c의 개수 : %d",ch,n);
	
	return 0;
}

int str_chr( char a[], char c)
{
 int num = 0;
 int i = 0; 
 
 while(a[i] !=0 ) {
 	if(a[i]== c ) num++ ;
 	i++;
 }
 
 return num ;
}
 	
 	
 	
	





