#include <stdio.h>

int main(void)
{
	int x ;
	
	printf("������ �Է��Ͻÿ�:");
	scanf("%d",&x);
	printf("�Էµ� ������ 10�� :%d, 16�� : %X �Դϴ�\n",x,x);
	printf("�Էµ� ������ ��ü ��Ʈ ���� ����(16��): %X\n",~x);
	 
	x = (~x) + 1 ;
	printf("��ü ��Ʈ ������ +1 = %d(10��), %X(16��)\n",x,x); 
	printf("2�Ǻ��� :%d\n",x);
	return 0 ;
}
	 
	
