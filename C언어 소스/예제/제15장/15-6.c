#include <stdio.h>

int main(void)
{
	int  i;
	
	for(i = 0 ; i < 6 ; i ++ )
	     printf("%d ", 1+(rand() % 45));  // 1���� 45������ ����  
	return 0;
}

