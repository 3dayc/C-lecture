#include <stdio.h>

int main(void)
{
	int sum=0,i=0 ;
	
	while(1) {
	 sum = sum + i ;
	 printf("sum = %d i = %d \n",sum,i);
	 if(sum > 10) break;	
	 i++;
    }
	
	printf("1���� %d������ ���� %d �Դϴ�\n",i-1,sum-i);
	return 0;
}
