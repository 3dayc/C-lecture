#include <stdio.h>
int main(void)
{
	int num, abs;
	printf("���� �Է�: ");
	scanf("%d", &num);
	
	if( num > 0 ) abs = num;
    else abs = num*(-1); 
    	//abs = num>0 ? num : num*(-1);
	printf("���밪: %d \n", abs);
    	return 0;
}

