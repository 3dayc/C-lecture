#include <stdio.h>
int main(void)
{
	int num, abs;
	printf("정수 입력: ");
	scanf("%d", &num);
	
	if( num > 0 ) abs = num;
    else abs = num*(-1); 
    	//abs = num>0 ? num : num*(-1);
	printf("절대값: %d \n", abs);
    	return 0;
}

