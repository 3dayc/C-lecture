#include <stdio.h>
#define ROWS 3
#define COLS 5

int main(void)
{
	int A[ROWS][COLS] = { { 12, 56, 24, 67, 74 },
	                      {  5, 11, 64, 43, 32 },
						  { 73, 89, 91, 14, 45 } };
						    
    int i , j ;

	int sum_row[ROWS] = { 0 } ;					  
    int sum_col[COLS] = { 0 };						  

	                   
	for(j = 0 ; j< 3; j++ ) {
	      for(i=0; i<5 ; i++ )
	        sum_row[j] = sum_row[j] + A[j][i];
	        printf("%d 열의 합 =%3d\n", j,sum_row[j]);
    }
	
	printf("\n");
	        
	 printf("행의 합\n");       
	 for(j = 0 ; j< 5; j++ ) {
	      for(i=0; i<3 ; i++ )
	        sum_col[j] = sum_col[j] + A[i][j];
	        printf("%3d  ",sum_col[j]);
    }     

	return 0;
}
	   
