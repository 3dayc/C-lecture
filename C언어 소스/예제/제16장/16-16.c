#include <stdio.h>

int main(void)
{
	int key ; 
	
	for( ; ; ) {
		printf("�ƹ�Ű�� �����ÿ�!!\n"); 
		key = getch();
	    if(key=='q') break;
	    
	    printf("key = %c 0x%x \n",key,key);
    }
}

