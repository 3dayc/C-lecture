#include <stdio.h>
#include <math.h>

void fucn(double, double, double);

int main(void)
{
	double a, b, c ;
	
	printf("a, b, c ���� �Է��Ͻÿ� :");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	func(a, b, c);
	return 0;
}

void func(double a, double b, double c)
{
	double d,x1,x2 ;
	
	d = b*b-4*a*c ;
	
	if(d <0.0 ) {
	   printf(" ���� �����ϴ�.");
    }
	
	else { 
	
      x1 = (-b +sqrt(d) )/(2.0 *a) ;
	  x2 = (-b -sqrt(d)) /(2.0 *a) ;
	  
	  printf("x = %f x2 = %f \n",x1,x2);
	
    }
}
