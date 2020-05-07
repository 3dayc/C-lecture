// example 18-16
//

#include <stdio.h>

void calculate(int, int, int *, int *);

int main(void)
{
 int x = 10, y =20 ;
 int sum = 0, diff = 0;
 
 calculate(x, y, &sum, &diff);
 
 printf("sum = %d diff = %d \n",sum,diff);
 return 0 ;
}

void calculate(int a, int b, int *s, int *df)
{
	*s = a + b ;
	*df = a - b ;
}
  
