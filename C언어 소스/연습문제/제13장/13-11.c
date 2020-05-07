#include <stdio.h>

int main(void)
{
	int a, b, c ;
	int max, mid, min ;
	
	printf(" 3개의 정수를 입력하시오 :");
	scanf("%d %d %d", &a, &b, &c);
	
	if( a > b ) {
	          if( b > c ) {
	          	     max = a;
	          	     mid = b;
	          	     min = c;
	          }
	          else if( b < c ){
	                 max = a;
	                 mid = c;
	                 min = b ;	  	
	          }
    }
    
    else if (b > c ) {
    	        if( c > a ) {
    	        	max = b ;
    	        	mid = c;
    	        	min = a ;
    	        }
    	        else if( c < a) {
    	        	max = b;
    	        	mid = a;
					min = c ;
			    }
    }

    else if( c > a) {
	            if(a > b) {
				    max = c;
					mid = a;
					min = b;
			    }
			    else if( a< b) {
			    	max = c ;
					mid = b ;
					min = a ;
			    }
    }
    
    printf(" max = %d mid = %d min = %d\n",max, mid, min);
    
    return 0 ;
}
    
    
    
			          
