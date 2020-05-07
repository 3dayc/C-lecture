#include <stdio.h>

int main(void)
{
	FILE *out ;
	
	out = fopen("Exoutput4.txt","w");
	
	fputc('M',out); 	fputc('y',out); 	fputc(' ',out); 	fputc('S',out); 	fputc('o',out);
	fputc('n',out); 	fputc(' ',out); 	fputc('i',out); 	fputc('s',out); 	fputc(' ',out);
	fputc('a',out); 	fputc(' ',out); 	fputc('G',out); 	fputc('o',out); 	fputc('o',out);
	fputc('d',out); 	fputc(' ',out); 	fputc('S',out); 	fputc('t',out); 	fputc('u',out);
	fputc('d',out); 	fputc('e',out);	    fputc('n',out);	    fputc('t',out);	    fputc('!',out);
	
	fclose(out);
return 0;
}
