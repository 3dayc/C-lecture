#include <stdio.h>
#include <string.h>

int main(void)
{
   int p1, p2, p3 ;
	
   p1= strcmp("Hello","Hello");
   p2= strcmp("Hello","Wordl");
   p3= strcmp("World","Hello");
   
   printf("p1 = %d p2 = %d p3 = %d\n",p1,p2,p3);
	
	return 0 ;
}
