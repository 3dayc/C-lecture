// 0 ���� �Է��ϴ� ���ڱ����� ���� ���Ͻÿ� 

#include <stdio.h>
int main(void)
{
	int total=0;
	int i, num;
	printf("0���� num������ ����, num��? ");
	scanf("%d", &num);
	
	for(i=0 ; i<=num ; i++)  total += i;
	printf("0���� %d���� �������: %d \n", num, total);
	
	return 0;
}

