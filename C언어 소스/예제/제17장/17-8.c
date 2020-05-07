//  example 17-8
//
#include <stdio.h>

#define SIZE 6

int main(void)
{
	int freq[SIZE] = {0}; // 1 ~6, 0 ~ 5
	int i,num ;
	
	for( i = 0 ; i < 10000 ;i ++ ) {
		    num = rand() %6; 
	       if(num== 0) freq[0] =freq[0]+1;
	        else  if(num == 1) freq[1] =freq[1]+1;
	        else  if(num == 2) freq[2] =freq[2]+1;
	        else  if(num == 3) freq[3] =freq[3]+1;
	        else  if(num == 4) freq[4] =freq[4]+1;
	        else  if(num == 5) freq[5] =freq[5]+1;
	        
	       // ++freq[rand()%6];
            
		
	}
	
	printf("================\n");
	printf(" ¸é      ºóµµ   \n");
	printf("================\n");
	
	for( i = 0 ; i<SIZE ; i++)
	    printf("%3d  %3d \n",i+1, freq[i]);
	
	return 0;
}
	        
