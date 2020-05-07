#include <stdio.h>

int main(vodi)
{
	  char op;
	  int x, y, result ;
	  
	  printf("수식을 입력하시오\n");
	  printf("(dP: 3 + 8 ) \n");
	  printf(">>");
	  scanf("%d %c %d",&x, &op, &y);
	  
	  switch(op)
	  {
	    case '+' :
		    result = x + y ;
		break;
		
		case '-' :
		    result = x - y ;
		break;
		
		case '*' :
		    result = x * y ;
		break;
		
		case '/' :
		    result = x / y ;
		break;
		
		case '%' :
		    result = x % y ;
		break;
		
		default :
			printf("지원되지 않는 연산자 입니다. \n");
		break;
    }

	printf("%d  %c  %d = %d \n", x, op, y, result);
	return 0;
}
		
		
		
		
		
		
		 
