// example 18-9
//
#include <stdio.h>

int main(void)
{
   int i = 10;
   int *pi = &i ;
   
   printf("i =%d, pi = %p\n",i,pi);
   (*pi)++;
   
   printf("i =%d, pi = %p\n",i,pi); 
   *pi++;
  
   printf("i =%d, pi = %p\n",i,pi);
   
   return 0;
}
