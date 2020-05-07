#include <stdio.h>

int main(void)
{
	int i = 0, sum = 0 ;
	
	do {
	    if(i%3==0)
	       sum = sum + i;
		
		i++;
    }while(i<=100);
    
    printf("sum = %d",sum);
    return 0 ;
}
