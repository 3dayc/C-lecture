#include <stdio.h>
int main(void)
{
	FILE *in,*out ;
	int c ;
	
	in = fopen("Exinput6.txt","r");
	out = fopen("Exoutput6.txt","w");
	
	while((c=fgetc(in))!=EOF)
	{
		if(c >'a' && c <'z' )
		     c = c - 0x20;
		else if(c >'A' && c <'Z')
		     c = c + 0x20;
		putchar(c);
		fputc(c,out);
   }
   fclose(in);
   fclose(out);
   return 0;
}
