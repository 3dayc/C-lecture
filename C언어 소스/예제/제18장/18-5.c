// example 18-5
//
#include <stdio.h>

int main(void)
{
	int i = 1000;
	int *p = NULL;
	
	p = &i;
	
	printf(" i = %d\n",i); //1000;
	printf("&i = %p\n\n",&i);
	
	printf(" *p = %d\n",*p); // 1000
	printf("p = %p\n",p);
	
	return 0 ;
}
