#include <stdio.h>

int main(void)
{
	int key ; 
	
	for( ; ; ) {
		printf("아무키나 누르시오!!\n"); 
		key = getch();
		if(key==0 || key==0xe0) {
		                key=getch();
		                printf("확장키 key = %c 0x%x \n",key,key);  
	    }
	    else {
		   printf("아스키 키key = %c 0x%x \n",key,key); 
	    }
		
		if(key=='q') break;
	    
	   
    }
}
