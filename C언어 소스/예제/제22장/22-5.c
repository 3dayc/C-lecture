#include <stdio.h>

int main(void)
{
	FILE *in;
	char st[101],st1[101];
	int i ;
	
	in = fopen("input.txt","r");
	
    fgets(st,101,in);
    fgets(st1,101,in);
   
    printf("1st line--\n");
	i = 0;  
    while(st[i]!='\n')
     {
       	putchar(st[i++]);
     }
     putchar('\n');
    
	 printf("2nd line--\n"); 
     i = 0;  
     while(st1[i]!='\n')
     {
       	putchar(st1[i++]);
     }
     putchar('\n');
     fclose(in);
    
  return 0;
}
