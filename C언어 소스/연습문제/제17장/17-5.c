#include <stdio.h>
#define SIZE 10

int main(void)
{
	int i ; 
	int min,max ;
	int num[SIZE];
	
	for( i = 0 ; i < SIZE ; i++ )
	    num[i] = rand() %100 ;
	    
	for( i = 0 ; i < SIZE; i++)
	   printf("num[%d] = %d\n",i,num[i]);
	  
    min= num[0] ;
    max= num[0] ;
    for(i = 1 ; i < 10 ; i ++ ) {
    	if(min > num[i]) 
    	        min = num[i] ;
    	if(max < num[i])
		        max = num[i];        
    }
	
	printf("�ּҰ� = %d\n",min); 
	printf("�ִ밪 = %d\n",max); 
	 
	return 0;
}
