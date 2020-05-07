#include <stdio.h>

int main(void)
{
	int sum, eng, math;
	float ave ;
	char name[20];
	
	FILE *in, *out;
	
	in = fopen("input3.txt","r");
	out = fopen("output3.txt","w");
	
	fscanf(in,"%s %d %d",name,&eng, &math);
	
	sum = eng + math;
	ave = (sum /2.0);
	printf("%s %d %.2f\n",name,sum,ave);
	fprintf(out,"%s %d %.2f\n",name,sum,ave);
	
	fclose(in);
	fclose(out);
 return 0;
}
