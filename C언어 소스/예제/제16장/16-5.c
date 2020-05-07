#include <stdio.h>

int x = 1234;

void func1(void);
void func2(void); 

int main(void)
{
  func1();
  func2();
  printf("main() :x = %d\n",x);
return 0;
}
void func1(void)
{
	printf("func1() : x = %d\n",x);
}

void func2(void)
{
  printf("func2() : x = %d\n",x);	
}
