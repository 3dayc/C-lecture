#include <stdio.h>

double is_cal(char, double, double);

int main(void)
{
	double f1, f2 ;
	double result ;
	char oper ;

	printf("연산자를 입력하시오 : ");
	scanf("%c",&oper);
	
	printf("두 개의 실수를 입력하시오 : ");
	scanf("%lf %lf",&f1,&f2);  
	

	
	result = is_cal(oper, f1, f2);
	
	printf("결과 값 = %f",result);
	
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

