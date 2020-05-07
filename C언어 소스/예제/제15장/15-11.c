#include <stdio.h>
#include <math.h>

int main(void)
{
	int a=0, b=0 ;
	double da=0.0, db=0.0 ;
	
	a = -9 ;
	b= abs(a);
	
	da = -19.87 ;
	db = fabs(da);
	
	printf("b = %d  db = %f \n",b,db);
	return 0;
}
	
	
