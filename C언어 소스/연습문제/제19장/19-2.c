#include <stdio.h>

int str_chr(char [], char);

int main(void)
{
	char s[30];
	char ch;
	int n ;
	
	printf("���ڿ��� �Է��Ͻÿ� :");
	gets(s);
	
	printf("������ �� ���ڸ� �Է��Ͻÿ�:");
	scanf("%c",&ch);
	 
    n = str_chr(s, ch);

    printf("%c�� ���� : %d",ch,n);
	
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
 	
 	
 	
	





