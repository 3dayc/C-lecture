#include <stdio.h>

int main(void)
{
	int i ; 
	char name[3][20];
	
	for( i = 0 ; i< 3; i++ ) {
		  printf("�̸��� �Է��Ͻÿ�:");
		  scanf("%s",name[i]);
    }
	
	for(i=0;i<3;i++)
	  printf("%d ��° �̸� : %s\n",i,name[i]);
	  
return 0;
}
