#include <stdio.h>

int main(void)
{
	int x ;
	printf("x�� �Է��Ͻÿ� :");
	scanf("%x",&x);
	
	x = x & 0x02 ;
    x = x >>1 ;
	
	printf("��� �� �ι�° ��Ʈ�� %d �Դϴ�",x);
	return 0 ;
}
