#include <stdio.h>

int main(void)
{
	int number, min = 10000 ;
	
	printf("정수를 입력하시오\n 종료는 Ctrl+z\n");
	
	while(scanf("%d",&number) !=EOF)
	{
	  if(number < min )
	             min = number ;
    }
    
    printf("최소값은 %d\n",min); 

	return 0;
}
