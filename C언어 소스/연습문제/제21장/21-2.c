#include <stdio.h>
#define RectRound(x) (4.0*x)

int main(void)
{
	float d ;
	printf("���簢���� �Ѻ��� ���̸� �Է��Ͻÿ�:");
	scanf("%f",&d);
	 
	printf("���簢���� �ѷ��� %f �Դϴ�\n",RectRound(d));
	return 0;
}
