#include <stdio.h>

int main(void)
{
	unsigned char   a ;  // 0~ 255           ,-128 ~ +127 
	unsigned short  b ;  // 0~ 65535         ,-32768 ~ +32767
    unsigned  int   c ;  // 0 ~ 4294967295   ,-2147483648 ~ +2147483647

    
    a = 128 ;    
    b = 32768;
    c = 2147483648;
    
    printf("a = %d  a = %u \n",a,a);
    printf("b = %d  b = %u \n",b,b);
    printf("c = %d  c = %u \n",c,c);
    
	return 0;
}

