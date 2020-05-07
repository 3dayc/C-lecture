#include <stdio.h>

int main(void)
{
	unsigned char b1 = 0xa1;
	unsigned char b2 ;
	
	for( b2 = 0xa1 ; b2 <=0xfe ;b2++ )
	{
	    printf("%c%c%2x%2x ",b1,b2,b1,b2);
	    if(b2 % 10 ==0) printf("\n");
    }
    printf("\n");  
	
	return 0;
}
