#include <stdio.h>

int main(void)
{
	 int i=0, n=0 , sum=0 ;
	 
	 printf("정수를 입력하시오: ");
	 scanf("%d",&n);
	 
	 i = 1;
	 
	 
	 while(i<=n)
	 { 
	   sum = sum + i;
	   i++;
     }

    printf("1부터 %d 까지의 합은 %d 입니다",n,sum);
	return 0;
}
	  
