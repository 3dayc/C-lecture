#include <stdio.h>

int main(void)
{
   char name[100];
     
   printf("이름을  입력하시오: ");
   gets(name);
   
   puts(name);
   //printf("%s", name);
  printf("END");
   
  return 0;
}
