#include <stdio.h>

int dec(int);

int main(void)
{
  int h = 11;
  
  printf("�Լ� ȣ���� h = %d\n",h);
  dec(h);
  printf("�Լ� ȣ�� �� h = %d\n",h);
  
  return 0;
}

int dec(int cnt)
{
	cnt-- ;
	return cnt ;
}
	
