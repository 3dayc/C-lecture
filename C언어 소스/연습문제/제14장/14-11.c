#include <stdio.h>

int main(void)
{
	int i, j ;
    int count = 0;
	
	for(i = 2; i <=100 ;i ++ ) {
		count = 0;
		for(j = 1 ; j <=i ; j++ ) {
			//printf("%d/%d = %d\n",i,j,i%j);
			if( i % j == 0 ) count++;
	    }
	    
	    if(count ==2) 
	        printf("%3d",i);
	     //printf("%3d\n",i);
	         
		}
  
    return 0 ;
}
	
