#include <stdio.h>

int main(void)
{
	int num ;
	char str[] = "My name is Doctor Chung";
	
	for( ; ; ) {
	 printf("출력할 문자 번호를 입력하시오:"); 
	 scanf("%d",&num);
	 if(num >=23 ) break;
	 
	 printf("%c\n",str[num]);
    }
}
	  
