#include <stdio.h>

int main(void)
{
	int i=0, r=0, n=0;
	float sum = 1;
	
    printf("�Ǽ��� ���� �Է��Ͻÿ� :");
	scanf("%d",&r); 
	printf("�ŵ������� Ƚ���� �Է��Ͻÿ� :");
	scanf("%d",&n);
	
	for( i =1 ; i <=n ; i ++ ) {
		sum = sum * r;
    }
    
    printf("��� ���� %f \n",sum);
	return 0;
}
