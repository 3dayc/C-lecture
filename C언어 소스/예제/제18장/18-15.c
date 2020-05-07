// example 18-15
//
#include <stdio.h>
void swap(int *, int *);

int main(void)
{
	int a = 10, b = 20 ;
	
	printf("a= %d b = %d\n",a,b);
	swap(&a, &b);
	printf("a= %d b = %d\n",a,b);
	
 return 0 ;
}

void swap( int *px, int *py)
{
	int tmp;
	
	tmp = *px; // tmp = a;
	*px = *py ; //a = b
	*py = tmp ; // b= tmp
}
