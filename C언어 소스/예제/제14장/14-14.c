#include <stdio.h>

int main(void)
{
	int i, n;
	
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &n);
	
	printf("    i       i�� ������\n");
	for(i = 1; i<=n; i++)
	   printf("%5d  %5d\n",i,i*i*i);
	return 0;
}
