#include <stdio.h>

int main(void)
{
	int num =0;
	int p=0;

	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d",&num); 
	
	if(num < 0 ) num = num * -1 ;
	
	do {
		
		p = num %10 ;
		printf("%d",p);
		num = num /10 ;
				
	}while(num);
}
