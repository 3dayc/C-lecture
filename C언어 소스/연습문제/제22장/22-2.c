#include <stdio.h>

int main(void)
{
	int  a1, a2, a3, a4, a5, total;

	FILE *in, *out;
	in = fopen("Exinput2.txt","r");
	out = fopen("Exoutput2.txt","w");
	
	fscanf(in, "%d %d %d %d %d",&a1, &a2, &a3, &a4, &a5);
	total =a1+ a2 + a3 +a4 +a5 ;
	printf("%d %d %d %d %d гу = %d\n",a1,a2,a3,a4,a5,total);
	fprintf(out,"%d %d %d %d %d гу = %d\n",a1,a2,a3,a4,a5,total);
	
	fclose(in);
	fclose(out);
return 0 ;
}
