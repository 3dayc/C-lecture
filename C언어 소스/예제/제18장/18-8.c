//example 18-8
//
#include <stdio.h>


int main(void)
{
  char *pc;
  int *pi ;
  double *pd ;
  
  pc = (char *) 10000;
  pi = (int *) 10000;
  pd = (double *) 10000;
  
  printf("������ pc = %d,   pi = %d,   pd = %d\n",pc,pi,pd);
  pc++;
  pi++;
  pd++ ;
  printf("������ pc = %d,   pi = %d,   pd = %d\n",pc,pi,pd);  
  
  printf("     pc+2 = %d, pi+2 = %d, pd+2 = %d\n",pc+2,pi+2,pd+2);

return 0;
}

