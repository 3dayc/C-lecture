#include <stdio.h>

int main(void)
{
	unsigned char fbyte = 0xa1 ;
	printf("1:%c%c, 2:%c%c, 3:%c%c, 4:%c%c",
	         fbyte,0xda, fbyte,0xdf,fbyte,0xe1,fbyte,0xe3);
    return 0 ;
}
