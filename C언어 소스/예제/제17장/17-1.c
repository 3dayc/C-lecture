#include <stdio.h>
int main(void)
{
	int i;
	int num[5], total = 0;
	
	num[0] = 10;
	num[1] = 20;
	num[2] = 30;
	num[3] = 40;
	num[4] = 50;
	
 //	total = num[0]+num[1]+num[2]+num[3]+num[4] ;
	
   	for(i=0 ; i < 5 ; i++ ) 
	     total = total + num[i];
	    
 	   
 	     
	printf("total = %d\n",total);
	
	return 0;
	    
}
