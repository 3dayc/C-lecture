#include <stdio.h>

#define PI 3.141592

int main(void)
{
	float r, area ;
	
	printf("���� �������� �Է��Ͻÿ� :");
	scanf("%f",&r);
	
	area = r *r * PI ;
	
	printf("���� ������ %f �Դϴ�\n",area);
	return 0;
}
