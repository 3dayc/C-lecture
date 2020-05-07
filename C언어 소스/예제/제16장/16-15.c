#include <stdio.h>

int main(void)
{
	unsigned char a1 = 0xa1;
	unsigned char a2 = 0xe1;
	unsigned char b1 = 0xa1;
	unsigned char b2 = 0xe6 ;
	
	printf("%c%c\n",a1,a2);
	printf("%c%c\n",b1,b2);
	return 0;
}
