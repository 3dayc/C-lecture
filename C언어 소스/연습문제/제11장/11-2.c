#include <stdio.h>

int main(void)
{
	int x, y ;
	int tmp ;
	
	printf("x:");
	scanf("%d",&x);
	
	printf("y:");
	scanf("%d",&y);
	
	tmp = x;
	x= y;
	y = tmp;
	
	printf("result : x = %d, y = %d",x,y);
	return 0;
}

	 
