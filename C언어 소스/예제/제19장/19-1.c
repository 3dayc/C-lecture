#include <stdio.h>

int main(void)
{
	int i ;
	char str[4];
	
	str[0] = 'b';
	str[1] = 'o';
	str[2] = 'y';
	str[3] = 0 ;  // str[4] = '\0'
	
	i = 0 ;
	
	for( ;; ) {
		if(str[i]==0) break;
		printf("%c",str[i]);
		i++ ;
    }
    
    return 0 ;
}
