#include <stdio.h>

int main(void)
{
	int h=0, i=0;
	
	for( ;; ) {  
	   printf("막대의 높이(종료 : -1) :");  
	   scanf("%d",&h);
	   
	   if(h==-1) break;
	   for(i = 0 ; i <h ;i ++ ) { 
	                 printf("*");
	   }
       printf("\n");
	}
    return 0;
}
