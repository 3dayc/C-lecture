#include <stdio.h>

#define Circle_AREA(x) (x)*(x)*3.141592

int main(void)
{
	float r ;
	printf("���� �������� �Է��Ͻÿ� :"); 
	scanf("%f",&r);
	printf("���� ������ = %f\n",Circle_AREA(r));
	return 0;
}

