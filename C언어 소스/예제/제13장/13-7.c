#include <stdio.h>
int main(void)
{
	int num, abs;
	printf("���� �Է�: ");
	scanf("%d", &num);
	
	abs=(num<0)? '-' : '+';
	(abs=='+')? printf("���\n"):printf("����\n"); 
	printf("���밪: %d \n", (num<0)?(-1*num):num);
          return 0;
}

