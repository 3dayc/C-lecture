#include <stdio.h>

int main(void)
{
	int num ;
	char str[] = "My name is Doctor Chung";
	
	for( ; ; ) {
	 printf("����� ���� ��ȣ�� �Է��Ͻÿ�:"); 
	 scanf("%d",&num);
	 if(num >=23 ) break;
	 
	 printf("%c\n",str[num]);
    }
}
	  
