#include <stdio.h>

int main(void)
{
	char str1[8] = "Daejeon";
	char str2[3] = { 'i','s','\0'};
	char str3[] = " a beautiful city";
	
	printf(" %s %s %s\n",str1, str2, str3);
	return 0 ;
}
