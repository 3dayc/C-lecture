#include <stdio.h>

#define MONTH 12

int main(void)
{
	int i ;
	int days[] = {31, 28, 31,30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	for( i = 0; i < 12 ;i++ ) 
		printf("%2d���� %2d��\n",i+1,days[i]);
		  
    return 0;
}
