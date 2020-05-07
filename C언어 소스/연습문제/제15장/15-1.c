#include <stdio.h>

double make_ceil(double);

int main(void)
{
	double a, b ;
	a = make_ceil (3.7);
	b = make_ceil(-3.5 );
	
	printf("a = %.1f b = %.1f",a,b);
}

double make_ceil(double x)
{
	int  t;
	double buff ;
	
	if(x > 0.0 ) {
	         x = x+1.0;
    }
    
    t = x / 1.0 ;
	   
	return (double) t ;
}
