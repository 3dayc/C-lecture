#include <stdio.h>

int main(vodi)
{
	  char op;
	  int x, y, result ;
	  
	  printf("������ �Է��Ͻÿ�\n");
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
			printf("�������� �ʴ� ������ �Դϴ�. \n");
		break;
    }

	printf("%d  %c  %d = %d \n", x, op, y, result);
	return 0;
}
		
		
		
		
		
		
		 
