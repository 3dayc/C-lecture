#include <stdio.h>

int str_chr(char [], char);

int main(void)
{
	char s[30];
	char ch;
	int n ;
	
	printf("문자열을 입력하시오 :");
	gets(s);
	
   for (ch = 'a';ch<='z';ch++) {
	 
     n = str_chr(s, ch);
     printf("%c : %d\n",ch,n);
   }
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
 	
 	
