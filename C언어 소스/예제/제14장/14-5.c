#include <stdio.h>
int main(void)
{
	int dan=0, num=1;

	printf("�� ��? ");
	scanf("%d", &dan);	

	while(num<=9) 
	{
		printf("%d��%d��%d \n", dan, num, dan*num);
		num++;
	}
	return 0;
}

