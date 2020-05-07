#include <stdio.h>

int main(void)
{
	char str1[] = "Good shoes are taken to good places.";
	char str2[100];
	int i;
	
	printf("원본 문자열 = %s\n",str1);
	
	for(i=0; str1[i]!=NULL; i++)
	    str2[i] = str1[i];
	    
	str2[i]= NULL;	 
	
	printf("복사된 문자열 = %s\n",str2);
	return 0;
}
	
	
