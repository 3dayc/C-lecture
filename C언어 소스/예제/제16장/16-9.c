# include <stdio.h>
int main(void)
{
	register int i, sum = 0;
	int num ;
	
	printf("���� �Է��Ͻÿ� :"); 
	scanf("%d",&num);
	
	for( i = 1; i <=num ;i++ )
	         sum = sum + i;
	
	printf("sum = %d\n",sum);
}

