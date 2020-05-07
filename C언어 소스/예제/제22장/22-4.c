#include <stdio.h>

int main(void)
{
	FILE *in, *out;
	int c ;
	
	in = fopen("input.txt","r");
	out = fopen("output.txt","w");
	
	while((c = fgetc(in))!=EOF)
	 {
	 	putchar(c);
	 	fputc(c,out);
     }
     
     fclose(in);
     fclose(out);
  return 0;
}
