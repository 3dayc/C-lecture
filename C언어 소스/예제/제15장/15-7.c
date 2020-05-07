#include <stdio.h>
#define MAX 45

int main(void)
{
  int i;

   /*
   long int t ;
  for( ; ;) {
  	t = time(NULL);
  	printf("t = %ld \n",t);
    if(kbhit()) break;	
  }
  */
  
   srand((unsigned) time(NULL) );
 
   for( i = 0 ; i < 6; i ++)
    printf("%d ", 1+rand()%MAX );
	
   return 0 ;
}
