#include <stdio.h>
#define SIZE 10
int main(void)
{
	int value, i ;
	int list[SIZE] = { 1,2,3,4,5,6,7,8,9};
	
	printf("Ž���� ���� �Է��Ͻÿ�:");
	scanf("%d",&value) ;
	
	for( i = 0 ; i <SIZE ; i++ )
	    if(list[i]==value)
	          printf("Ž�� ���� index = %d\n",i);
	
	printf("Ž�� ����\n");
	return 0 ;
}
