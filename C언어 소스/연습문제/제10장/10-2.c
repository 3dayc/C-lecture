#include <stdio.h>

int main(void)
{
	int x ;
	int times ;
	int result ;
	
	printf("������ �Է��Ͻÿ� :");
	scanf("%d",&x);
	
	printf("2�� ���ϰ� ���� Ƚ��:");
	scanf("%d",&times);
	
	result = x << times ;
	printf("%d << %d�� �� : %d",x,times, result); 
	return 0;
}
