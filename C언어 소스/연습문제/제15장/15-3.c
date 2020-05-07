#include <stdio.h>

int make_abs(int);


int main(void)
{
	int x, y ;

    x = make_abs(-7);
    y = make_abs(7) ;
	
	printf("x = %d  y = %d\n",x,y);
	return 0;
}

int make_abs(int a)
{
	if(a < 0 ) a = a * -1;
	return a ;
}

