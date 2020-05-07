#include <stdio.h>
#include <string.h>

int main(void)
{
	char dst[6] ={0};
	char str[6] = "Hello";
	
	strncpy(dst, str,2);
	
	printf("str = %s\n",str);
	printf("dst = %s\n",dst);
	
	return 0 ;
}
