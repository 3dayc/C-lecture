#include <stdio.h>

int main(void)
{
	int  kor,eng,math, total;
	float ave ;
	
	char name[20];
	
	FILE *in, *out;
	in = fopen("Exinput1.txt","r");
	out = fopen("Exoutput1.txt","w");
	
	fscanf(in, "%s %d %d %d",name,&kor,&eng,&math);
	total = kor+eng+math ;
	ave = total/3.0;
	printf("%s %d %d %d %d %.2f\n",name,kor,eng,math,total,ave);
	fprintf(out,"%s %d %.2f\n",name,total,ave);
	
	fclose(in);
	fclose(out);
return 0 ;
}
