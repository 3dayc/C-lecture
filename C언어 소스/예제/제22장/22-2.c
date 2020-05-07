#include <stdio.h>

int main(void)
{
	FILE *fp ;
	fp = fopen("test.txt","w");
		   
	fputc('a',fp);
	fputc('p',fp);
	fputc('p',fp);
	fputc('l',fp);
	fputc('e',fp);
	 
	fclose(fp);
return 0;
}
