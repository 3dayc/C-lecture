#include <stdio.h>

double is_cal(char, double, double);

int main(void)
{
	double f1, f2 ;
	double result ;
	char oper ;

	printf("�����ڸ� �Է��Ͻÿ� : ");
	scanf("%c",&oper);
	
	printf("�� ���� �Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf %lf",&f1,&f2);  
	

	
	result = is_cal(oper, f1, f2);
	
	printf("��� �� = %f",result);
	
	return 0;
}

double  is_cal(char op, double x, double y)
{
	double r ;
	
	switch(op) {
		case '+' :  r = x + y ; 
		break;
		
		case '-' :  r = x - y ; 
		break;
		
		case '*' :  r = x * y ; 
		break;
		
		case '/' :  r = x / y ; 
		break;
		
		default : break;
    }
    
    return r ;
}

