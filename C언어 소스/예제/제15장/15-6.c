#include <stdio.h>

int main(void)
{
	int  i;
	
	for(i = 0 ; i < 6 ; i ++ )
	     printf("%d ", 1+(rand() % 45));  // 1부터 45까지의 난수  
	return 0;
}

