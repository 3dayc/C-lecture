#include <stdio.h>
int main(void)
{
	char c ;
	int n1, n2, r ;
	
	FILE *in ;
	
	in=fopen("Exinput7.txt","r");
	
	while(fscanf(in,"%d %d %c",&n1,&n2,&c)==3) {
		   
		  switch(c) {
		       case '+' : r = n1+n2 ; break;
		       case '-' : r = n1-n2 ; break;
		       case '*' : r = n1*n2 ; break;
		       case '/' : r = n1/n2 ; break;
			   case '%' : r = n1%n2 ; break; 
		       default  : break ;
	      }
		 
		 printf("%d %c %d = %d\n",n1,c,n2,r);
    }
    fclose(in);
    return 0;
}
