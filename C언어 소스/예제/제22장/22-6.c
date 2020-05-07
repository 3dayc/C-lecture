#include <stdio.h>

int main(void)
{
	FILE *in, *out;
	char st[101],st1[101];
	int i ;
	
	in = fopen("input.txt","r");
	out = fopen("output1.txt","w");
    fgets(st,101,in);
    fgets(st1,101,in);
   
    i = 0;  
     while(st[i]!='\n')
     {
       	putchar(st[i++]);
      }
     putchar('\n');
	 fputs(st,out);
     fputc('\n',out);
     
     i = 0;  
     while(st1[i]!='\n')
     {
       	putchar(st1[i++]);
     }
     putchar('\n');
	 
	 fputs(st1,out);
     fputc('\n',out);
     
     
     fclose(in);
     fclose(out);
    
    
  return 0;
}
