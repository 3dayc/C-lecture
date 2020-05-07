#include <stdio.h>

int main(void)
{
	int key ; 
	
	for( ; ; ) {
		printf("아무키나 누르시오!!\n"); 
		key = getch();
	    if(key=='q') break;
	    
	    printf("key = %c 0x%x \n",key,key);
    }
}

