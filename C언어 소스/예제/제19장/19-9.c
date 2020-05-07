#include <stdio.h>

int main(void)
{
	int c ;
  
	while(1) {
	c= getchar();
	if(c==EOF) break;

   	if(islower(c) !=0) c = toupper(c) ;   
	else if(isupper(c) !=0) c= tolower(c);
			              
    putchar(c);			              
	}
 return 0 ;
}
