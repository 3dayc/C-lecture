#include <stdio.h>

double f_to_c(double) ;

int main(void)
{
	double F, C ; 
	
	printf("ȭ�� �µ��� �Է��Ͻÿ� : ");
	scanf("%lf",&F);
	
	C = f_to_c(F);
	
	printf("���� �µ��� ��ȯ�� ���� %.2f �Դϴ�",C);
	return 0;
}

double f_to_c(double fx)
{
	double cx ;
	cx= 5.0/9.0 * (fx-32.0); 
	
	return cx;
}
	
