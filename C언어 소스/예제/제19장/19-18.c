#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char s1[]="123";
	char s2[]="45.67";
	char buff[50];
	
	int i;
	double d ;
	double val ;
	
	i = atoi(s1); //i = 123
	d = atof(s2); //d = 45.67
	
	val = i+ d ;
	sprintf(buff,"%f",val);
	
	printf("����� %s �Դϴ�\n",buff);
	return 0;
}
	
