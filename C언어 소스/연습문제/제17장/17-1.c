#include <stdio.h>

#define SIZE 5
int main(void)
{
	int num[SIZE] ;
	int i;
	
	for( i = 0 ; i < SIZE ; i ++ )
	{
		printf("%d ��° ������ �Է��Ͻÿ�: ",i);
		scanf("%d",&num[i]);
    }
    
    for(i = SIZE - 1 ; i >= 0  ; i-- )
    {
    	printf(" %d��° ���� =>   %d \n",i, num[i]);
    }
    
    return 0;
}
