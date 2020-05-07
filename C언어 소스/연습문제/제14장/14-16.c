#include <stdio.h>

int main(void)  
{
	int i , n ;
	int f1 = 1, f2 = 1, f3 = 0 ;
	
	printf(" 몇 번째 항까지 구할까요? (1~ n) : ");
	scanf("%d",&n);
  
    	
   	for(i=1 ; i <= n ; i++ ) {
    	
	        if(n==1 ) {
			            printf("%3d",f1);
			            break;
		    }
		     else if(n==2 ) {
			            printf("%3d %3d",f1,f2);
			            break;
		    }
		    		    
		
		    if( i >=3 ) {
			     f3 = f1 +f2 ; 
		         f1 = f2;
			     f2 = f3 ;
		    }
		     
	        if(i==1 ) printf("%5d",f1);
	        else if(i==2)  printf("%5d",f2);
			else printf("%5d",f3); 
		    
    }
 }
    
		    
		    
		    
		    
		
    		 

			
	 
