#include <stdio.h>
int main(void)
{
	int num, abs;
	printf("정수 입력: ");
	scanf("%d", &num);
	
	abs=(num<0)? '-' : '+';
	(abs=='+')? printf("양수\n"):printf("음수\n"); 
	printf("절대값: %d \n", (num<0)?(-1*num):num);
          return 0;
}

