#include <stdio.h>

int main(void)
{
	int len=0 ,i=0 ;
	char str[50];
	
	scanf("%s",str);
	
	while(str[len] != 0 )
	{ 
	  len ++;
	}
	
	printf("입력받은 문자열의 길이는 %d 입니다\n",len);
	for(i = len-1 ; i >=0; i--) 
             	printf("%c",str[i]);
    printf("\n");
    
    return 0;
}
    
    

