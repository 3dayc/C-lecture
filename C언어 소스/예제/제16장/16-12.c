#include <stdio.h>

int main(void)
{
  int  i = 0;	
  char key = 0;
  
  for( ; ; ) {
   printf("i = %d\n",i++);
  
   key = kbhit(); 
  
   if(key==1) break;  
  }
  
  printf("key = %d\n",key);
 return 0;
}
