#include <stdio.h>

int main(void)
{
	int number ;
	int i, j ;
	
	printf("������ �Է��Ͻÿ�: ");
	
	scanf("%d",&number);
	
	for(i = 1; i <=number ;i++ ) {
		       for(j = 1; j <= i ; j++ ) {
		       	           printf("%4d",j);
		       }
	printf("\n");
   }
}

	
	
