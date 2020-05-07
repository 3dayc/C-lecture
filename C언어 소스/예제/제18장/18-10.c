// example 18-10
//
#include <stdio.h>

int main(void)
{
	char buff[4];
	int  *pi;
	char *pc ;
	
	pi = (int *) buff;
	*pi = 0x1234;
	
	printf("%x\n",*pi);
	
	pc = (char *)buff;
	printf("%x  %x \n", *pc, *(pc+1));
	return 0;
}
