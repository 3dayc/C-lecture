#include <stdio.h>

int main(void)
{
	double  w, h ;
	double Circumference, Area ;
	
	printf(" ���簢���� ������ ���̸� �Է��Ͻÿ�==> "); 
	scanf("%lf",&w);
	printf(" ���簢���� ������ ���̸� �Է��Ͻÿ�==> "); 
	scanf("%lf",&h);
	
	Circumference = 2*w +2*h ;
	Area = w *h ;
	
	printf("���簢���� �ѷ�: %lf, ���� : %lf \n",Circumference, Area);
	return 0;
}
	
	
