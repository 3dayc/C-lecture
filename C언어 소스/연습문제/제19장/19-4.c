#include <stdio.h>

int main(void)
{
	int key;
	while(1) {
		key = getchar();
		if(key==EOF) break;
		
		if(key >= 'a' && key <='z') {
		               putchar(key-32);
	    }
		else if(key>='A' && key <='Z') {
		                putchar(key +32);
	   }
	   printf("\n");
    }
}
		     				                
		
		
		
		
