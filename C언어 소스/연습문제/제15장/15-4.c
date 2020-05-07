#include <stdio.h>

double make_fabs(double);


int main(void)
{
	double x, y ;

    x = make_fabs(-3.14);
    y = make_fabs(3.14) ;
	
	printf("x = %.2f  y = %.2f\n",x,y);
	return 0;
}

double make_fabs(double a)
{
	if(a < 0.0 ) a = a * -1.0;
	return a;
}

