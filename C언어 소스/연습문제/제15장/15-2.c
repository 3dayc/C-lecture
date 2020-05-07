#include <stdio.h>

double make_floor(double);

int main(void)
{
	double x, y ;
	
	x = make_floor(2.9);
	y = make_floor(-2.9);
	
	printf("x = %.1f  y = %.1f ",x,y);
	return 0;
}

double make_floor(double a)
{
	int a1 ;
	double t ;
	
	if(a < 0.0 ) 
	        a = a -1.0;

	a1 = a /1.0 ;
	t = a1 ;

	return t ;
}
	
	
