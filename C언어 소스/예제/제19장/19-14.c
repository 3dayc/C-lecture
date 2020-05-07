#include <stdio.h>
#include <string.h>

int main(void)
{
	char dst[20] = "Hello ";
	char str[6] =  "World";
	
	strcat(dst,str);
	

	printf("dst = %s\n",dst);
	
	return 0 ;
}
