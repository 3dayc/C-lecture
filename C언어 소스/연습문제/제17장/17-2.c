#include <stdio.h>
#define SIZE 5

int main(void)
{
	int num[SIZE] = { 30, 20, 10, 40, 50 };
	int i, s;
	
	for( i = 0 ; i < SIZE ; i++ )
	{
		printf("¹øÈ£ %d: ",i);
		for(s= 0; s<num[i];s++)
		                printf("*");
		printf("\n");
    }
    
    return 0;
}

		 
