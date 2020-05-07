#include <stdio.h>

int main(void)
{
	char num[] = "100 200 300";
	char s[30];
	int val, val1; 
	
	sscanf(num, "%d %d", &val,&val1); //val = 100, val1 = 200
	printf("%d  %d\n",val,val1);   //100  200
	
	val = val +val1;   // val = 300
	sprintf(s, "%d", val); //s[] = "300"
	printf("%s\n",s);     // 300
	
	return 0;
	
}
