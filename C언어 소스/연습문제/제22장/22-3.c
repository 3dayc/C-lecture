#include <stdio.h>

int main(void)
{
    int i ;
	float data[10];
	FILE *in, *out;
	
	in = fopen("./example/Exinput3.txt","r");
	out = fopen("./example/Exoutput3.txt","w");
	
	for(i = 0 ; i <10 ; i ++ )
	     fscanf(in,"%f",&data[i]);
	
	for(i= 0 ; i< 10 ; i +=2)
	    fprintf(out,"%.1f  ",data[i]);
	    
	fprintf(out,"\n");
	
	fclose(in);
	fclose(out);
	
	return 0;
}
