#include <stdio.h>

int main(void)
{
	char str[50] = "Good shoes are taken to good places.";
	int i = 0;
	
	while(str[i] != 0)
	 i++ ;
	 
	printf("문자열 %s의 길이는 %d 입니다.\n",str,i); 
	return 0;
}
	
