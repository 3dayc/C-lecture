#include <stdio.h>

#define SQUARE(x)   ((x) * (x))
#define SQUARE1(x)    x * x

int main(void)
{
	int x = 2;
	
	printf("%d \n",SQUARE(x));
	printf("%d \n",SQUARE1(x));	
	
	printf("%d \n",SQUARE(x+3));  // (2+3) * (2+3)
	printf("%d \n",SQUARE1(x+3)); // 2+3 * 2+3  ==11
	
  return 0;
}
	
	

