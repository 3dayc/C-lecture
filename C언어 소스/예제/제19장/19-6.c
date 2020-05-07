#include <stdio.h>

int main(void)
{
	char ch;
	while(1) {
	   	printf("\n start===\n");
		ch =getch();
	    printf("=====\n");
	    putch(ch);
	    
	
		if(ch=='q') break;
    }
    return 0;
}
