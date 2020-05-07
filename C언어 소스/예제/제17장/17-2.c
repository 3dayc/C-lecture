#include <stdio.h>
#define SIZE 5

int main(void)
{
 int i ;
 int num[SIZE];
 int total = 0;
 
 printf("5명의 점수를 입력하시오\n");
 
 for(i = 0 ; i < SIZE ; i++ )
           scanf("%d",&num[i]);
   
 for(i = 0; i <SIZE ; i++)
       printf("num[%d] = %d\n",i,num[i]);
 
for(i = 0; i <SIZE ; i++)
       total = total +num[i];
 
 printf("total = %d\n",total);      
 return 0;
}
   	     
