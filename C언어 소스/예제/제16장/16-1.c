#include <stdio.h>

int main(void)
{
	int x, y;
	
	printf("두 수를 입력하시오 :");
	scanf("%d %d",&x,&y); 
		
	if(x > y )
	{
		 int diff ; 
		 diff = x-y ;
		 printf(" x가 y 보다 %d 만큼 크다\n",diff);
		 
    }
    
    // printf("diff  =%d \n",diff);
     printf("프로그램 종료 !!\n"); 
  return 0;
}
