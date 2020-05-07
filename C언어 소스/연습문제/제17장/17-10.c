#include <stdio.h>

#define ROWS 5
#define COLS 3

int main(void)
{
	int i, j ;
	
	int min[3] ={ 0 } ;
	int max[3] ={ 0 } ;
	
	int min_st[3] = { 1,1,1 };
	int max_st[3] = { 1,1,1 } ;
	
	
	int grade[ROWS][COLS] = { { 49, 90, 67 },
	                          { 89, 88, 90 },
	                          { 55, 82, 64 },
	                          { 77, 41, 87 },
	                          { 71, 87, 95 } } ;

	for(j = 0 ; j <3; j++ )
	      min[j] = max[j] = grade[0][j] ;
	

	
	for(j = 0 ; j < 3 ; j++ ) {
	   for(i = 0; i< 5 ; i++ ) {
		    if(min[j] > grade[i][j]) {
			     min[j] = grade[i][j] ;
			     min_st[j] = i+1;
		    }
			
			if(max[j] <grade[i][j]) {
			     max[j] = grade[i][j] ;
				 max_st[j] = i+1 ;
			}
       
		}
    }
	  
    for(j = 0 ; j <3; j++ )  
			printf(" min[%d] = %d   min_st = %d\n",j+1,min[j],min_st[j]);
		
 	
 	 for(j = 0 ; j <3; j++ ) 
			printf(" max[%d] = %d   max_st = %d \n",j+1,max[j],max_st[j]);
 	
 	
 	return 0;
}
	  
	                          
