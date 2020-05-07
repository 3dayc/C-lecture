//
// example 17-13 
#include <stdio.h>

int main(void)
{
	int s[3][5];
	int i, j;
	int value = 0;
	
	for(i= 0;i<3;i++)
	   for(j=0;j<5;j++)
	      s[i][j] = value++ ;
	
	for(i= 0;i<3;i++)
	   for(j=0;j<5;j++)
	      printf("s[%d][%d] = %d\n",i,j,s[i][j]);
	
	return 0;
}
		  
		  
		  
		        
	      
	      
	      
