#include <stdio.h>

double make_pow(int, int);

int main(void)
{
	double x,y,z ;
	
	x = make_pow(2, 3);
	y = make_pow(2,-2);
	z = make_pow(2,0);
	
	printf("x= %.2f     y = %.2f z = %.2f\n",x,y,z);
	return 0;
}

double make_pow(int a, int b)
{
	int i ;
	double soo=1.0 ;
	
	 if( b > 0 ) {
	     for(i = 0; i< b ; i ++ )
  	           soo =soo * a ;
    }
	else if(b< 0 ) {
		     b = b * -1 ;
		     for(i = 0; i < b;i++) 
			    soo = soo /a;
    }
	
	
    return soo ;
}
	
	
