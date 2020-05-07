#include <stdio.h>

int dec(int);

int main(void)
{
  int h = 11;
  
  printf("함수 호출전 h = %d\n",h);
  dec(h);
  printf("함수 호출 후 h = %d\n",h);
  
  return 0;
}

int dec(int cnt)
{
	cnt-- ;
	return cnt ;
}
	
