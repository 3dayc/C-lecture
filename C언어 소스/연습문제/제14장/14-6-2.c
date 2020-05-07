#include <stdio.h>

int main(void)
{
int sum=0, i=0;

	for( i=0 ; i<=100 ; i++ ) {
		 if( i % 3 == 0 )  
		       sum = sum + i ;
    }
    
    printf("sum = %d",sum);
    return 0; 
}
