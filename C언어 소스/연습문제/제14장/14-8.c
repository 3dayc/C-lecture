#include <stdio.h>

int main(void)
{
  int i, j;
  
  for( i = 1 ; i <= 7 ; i ++ ) {
      for( j = 0 ; j < i ; j ++ ){ 
	                       printf("*");	
      }
   printf("\n");     
  }
 return 0;
}
	                       
