// example 18-11
//
#include <stdio.h>

int main(void)
{
	 int a[] = { 10, 20, 30, 40, 50 } ;
	 
	 printf("&a[0] = %p\n",&a[0]);
	 printf("&a[1] = %p\n",&a[1]);
	 printf("&a[2] = %p\n",&a[2]);
	 
	 printf("a = %p\n",a);
	 
	 return 0;
}
