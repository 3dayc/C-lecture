// �ԷµǴ� ������ ���� ���Ͽ���. 
 // ��, 0 �� ������ ���α׷��� �����Ѵ�.
#include <stdio.h>
int main(void)
{
	int total=0, num=0;	
	do
	{
	
	  printf("���� �Է�(0 to quit): ");
	  scanf("%d", &num);
	  total = total + num;
	
	}while(num!=0);
	printf("�հ�: %d \n", total);
	return 0;
}

