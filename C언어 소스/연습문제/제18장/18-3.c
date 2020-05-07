#include <stdio.h>

void copy_array(int *, int *, int) ;

int main(void)
{
	int i ;
	int ArrayA[5] = {1, 2, 3, 4, 5 } ;
	int ArrayB[5] = {0} ;
	
	copy_array(ArrayA,ArrayB, 5);
	
	for( i = 0 ; i < 5 ; i ++ )
	     printf("ArrayA[%d] =%d : ArrayB[%d] = %d \n",
		             i,ArrayA[i],i,ArrayB[i]); 
    return 0;
}

void copy_array(int *A, int *B,int size)
{
	int i ; 
	
	for( i = 0 ; i<size; i++ ) {
		        B[i] = A[i];
    }
}
