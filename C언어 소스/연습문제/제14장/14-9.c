#include <stdio.h>

int main(void)
{
	int number ;
	int i, j ;
	
	printf("정수를 입력하시오: ");
	
	scanf("%d",&number);
	
	for(i = 1; i <=number ;i++ ) {
		       for(j = 1; j <= i ; j++ ) {
		       	           printf("%4d",j);
		       }
	printf("\n");
   }
}

	
	
