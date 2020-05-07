#include <stdio.h>
int main(void)
{
	FILE *in ;
	int c ;
	
	in = fopen("Exinput5.txt","r");
	
	while((c=fgetc(in))!=EOF)
	{
		if(c >'a' && c <'z' )
		     c = c - 0x20;
		else if(c >'A' && c <'Z')
		     c = c + 0x20;
		putchar(c);
   }
   fclose(in);
   return 0;
}
