#include <stdio.h>

int main(void)
{
	int number = 0,sum = 0;

    while(scanf("%d",&number)!=EOF)
	{
      sum = sum +number ;
    }   
	printf("sum = %d\n",sum);
	return 0;
}
	
