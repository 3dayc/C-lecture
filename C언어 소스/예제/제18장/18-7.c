// example 18-7
//

#include <stdio.h>
int main(void)
{
	int i = 10;
	int *p =NULL;
	
	p = &i;
	printf("i = %d *p = %d\n",i,*p);
	
	*p = 20 ;
	printf("i =%d\n",i);
	
	return 0 ;
}
