#include <stdio.h>

int main(void)
{
	int i=0, n=0 ;
	int sum = 0 ;
	
	printf("n�� ���� �Է��Ͻÿ� :");
	scanf("%d",&n);
	
	for(i = 1; i <=n ; i++ ) {
	  sum = sum + i * i ;
    }
    
    printf("��� ���� %d �Դϴ�.\n",sum);
	return 0;
}
