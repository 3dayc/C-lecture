#include <stdio.h>

int main(void)
{
	int len=0 ,i=0 ;
	char str[50];
	
	scanf("%s",str);
	
	while(str[len] != 0 )
	{ 
	  len ++;
	}
	
	printf("�Է¹��� ���ڿ��� ���̴� %d �Դϴ�\n",len);
	for(i = len-1 ; i >=0; i--) 
             	printf("%c",str[i]);
    printf("\n");
    
    return 0;
}
    
    

