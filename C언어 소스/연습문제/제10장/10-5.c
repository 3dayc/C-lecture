#include <stdio.h>

int main(void)
{
	int n, x ;
    int buff = 1 ;

    printf("n���� �Է��Ͻÿ� :");
	scanf("%d",&n);
	
	printf("x�� �Է��Ͻÿ� :");
	scanf("%x",&x);
	
	buff = buff << (n-1) ;
	x = x & buff ;
    x = x >>(n-1) ;
	
	printf(" ��� �� %d ��° ��Ʈ�� %d �Դϴ�",n,x);
	return 0 ;
}
