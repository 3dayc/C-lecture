#include <stdio.h>

int main(void)
{
	double x, y ;
	
	printf("�Ǽ���  �Է��Ͻÿ� : ");
	scanf("%lf",&x);
	
	y = 3.0*x*x + 7*x + 11;
	printf("���׽���  ���� %.1lf �Դϴ�.",y);
	return 0; 
}
