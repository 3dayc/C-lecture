#include <stdio.h>

int main(void)
{
 int i, j;
 int result = 0;
 
 for(j = 1; j <=9 ; j++ ) {
    system("cls");
   for(i = 1; i<= 9 ; i++ )  {
   	    result = j * i ;
        printf("%d x %d = %d \n",j,i,result);
   } 
    printf("아무키나 누르시오\n"); 
    getch();
    
 }
}

   
