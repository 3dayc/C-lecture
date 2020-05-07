#include <stdio.h>

void print_array(int *, int) ;

int main(void)
{
	int Array[] = {1, 2, 3, 4, 5 } ;
	
	print_array(Array, 5);
    return 0;
}

void print_array(int *A, int size)
{
	int i ; 
	printf("A[%d] = { ",size);
	
	for( i = 0 ; i<size; i++ ) {
		 printf("%d ",A[i]);
    }
    printf(" } ");
}
