#include <stdio.h>

int main(void)
{
	float a, b, c ;
	float sum, ave ;
	
	printf("�Ǽ��� �Է��Ͻÿ� :");
	scanf("%f",&a);
	
	printf("�Ǽ��� �Է��Ͻÿ� :");
	scanf("%f",&b);
	
	printf("�Ǽ��� �Է��Ͻÿ� :");
	scanf("%f",&c);
	 
	sum = a + b + c ;
	ave = sum /3. ;
	
	printf("�հ�� %.1f �̰� ��հ��� %.1f�̴�",sum,ave);
	return 0 ;
}

