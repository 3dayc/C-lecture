#include <stdio.h>
#include <math.h>

int main(void)
{
	double c1, c2, f1, f2 ;
	
	c1 = ceil(2.5); //3.0
	c2 = ceil(-2.5); //-2.0
	
	f1 = floor(2.5); //2.0
	f2 =floor(-2.5); // -3.0
	
	printf("c1 = %f c2 = %f f1 = %f f2 = %f ",
	        c1, c2, f1, f2);
	return 0;
}
