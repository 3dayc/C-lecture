#include <stdio.h>

int main(void)
{
	int key ; 
	
	for( ; ; ) {
		printf("�ƹ�Ű�� �����ÿ�!!\n"); 
		key = getch();
		if(key==0 || key==0xe0) {
		                key=getch();
		                printf("Ȯ��Ű key = %c 0x%x \n",key,key);  
	    }
	    else {
		   printf("�ƽ�Ű Űkey = %c 0x%x \n",key,key); 
	    }
		
		if(key=='q') break;
	    
	   
    }
}
