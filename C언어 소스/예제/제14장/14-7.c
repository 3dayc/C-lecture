#include <stdio.h>

int main(void)
{
	 int i=0, n=0 , sum=0 ;
	 
	 printf("������ �Է��Ͻÿ�: ");
	 scanf("%d",&n);
	 
	 i = 1;
	 
	 
	 while(i<=n)
	 { 
	   sum = sum + i;
	   i++;
     }

    printf("1���� %d ������ ���� %d �Դϴ�",n,sum);
	return 0;
}
	  
