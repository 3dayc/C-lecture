#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, len ;
	char str[101];
	
	printf("입력문장 :");
	gets(str);
	
	len =strlen(str);
	
	for( i = 0 ; i <len ;i ++ ) {
		if(str[i]==' ') 
			      printf("\n");
		else 
		          printf("%c",str[i]);
    }
    printf("\n");
    
    return 0 ;
}
	 
