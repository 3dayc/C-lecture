//
// example 17-14
#include <stdio.h>

int main(void)
{
	int s[3][3][3];
	int x, y, z;
	int i = 1;
	
	for(z=0 ; z<3 ;z++ )
	  for(y=0 ; y<3 ;y++ )
	    for(x=0 ; x<3 ;x++ )
             s[z][y][x] = i++ ;
     
	for(z=0 ; z<3 ;z++ ) {
	  for(y=0 ; y<3 ;y++ ) {
	    for(x=0 ; x<3 ;x++ ) {
             printf("s[%d][%d][%d] = %3d  ",z,y,x,s[z][y][x]);
	    }
	    printf("\n");
      }
      printf("\n");
    }
	printf("\n");
	         
	return 0;
}
