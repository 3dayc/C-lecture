#include <stdio.h>

void calculate(int, int, int *, int *, int *, int *);

int main(void)
{
 int x = 20, y =5 ;
 int sum = 0, diff = 0;
 int mul = 0, div = 0 ;
 
 calculate(x, y, &sum, &diff, &mul,&div);
 
 printf("sum = %d diff = %d mul = %d div = %d\n",sum,diff,mul, div);
 return 0 ;
}

void calculate(int a, int b, int *psum, int *pdiff, int *pmul, int *pdiv)
{
	*psum  = a + b ;
	*pdiff = a - b ;
	*pmul  = a * b;
	*pdiv  = a / b ;
}
  
