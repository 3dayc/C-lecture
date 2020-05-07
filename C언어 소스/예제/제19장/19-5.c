#include <stdio.h>

int main(void)
{
	int ch;
	while(1) {
	   	ch =getchar();
	    putchar(ch);
	
		if(ch==EOF) break;
    }
    return 0;
}
