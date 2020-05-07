// example 18-14
//
#include <stdio.h>
void swap(int, int);

int main(void)
{
	int a =10, b = 20 ;
	
	printf("a = %d b = %d \n",a,b);
	swap(a,b);
	printf("a = %d b = %d \n",a,b);
	
	return 0;
}

void swap(int x, int y)
{
	int tmp;
	printf("x = %d y = %d\n",x,y);
	
	tmp = x;
	x = y;
	y = tmp;
	printf("x = %d y = %d\n",x,y);
}
