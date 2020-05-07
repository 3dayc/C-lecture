#include <stdio.h>

int x= 1;

void func1(void);

int main(void)
{
	int x =-10 ;
	
	printf("x = %d\n",x);
	func1();
	printf("x = %d\n",x);
}

void func1(void)
{
	printf("x = %d\n",x);
}
