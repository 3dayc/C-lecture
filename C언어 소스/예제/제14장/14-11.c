// 입력되는 정수의 합을 구하여라. 
 // 단, 0 이 들어오면 프로그램을 종료한다.
#include <stdio.h>
int main(void)
{
	int total=0, num=0;	
	do
	{
	
	  printf("정수 입력(0 to quit): ");
	  scanf("%d", &num);
	  total = total + num;
	
	}while(num!=0);
	printf("합계: %d \n", total);
	return 0;
}

