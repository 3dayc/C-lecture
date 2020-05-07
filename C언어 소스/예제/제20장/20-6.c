#include <stdio.h>

union example {
	  int i;
	  char c ;
};

int main(void)
{
	union example v ;
	v.c = 'A';
	printf("v.c: %c v.i:%d\n",v.c,v.i);
	
	v.i = 66;
	printf("v.c: %c v.i:%d\n",v.c,v.i);
	
	return 0;
}
