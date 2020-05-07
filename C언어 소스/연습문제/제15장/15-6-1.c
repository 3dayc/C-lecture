#include <stdio.h>

int even(int) ;

int main(void)
{
	int x ;
	int r ;
	printf("숫자를 입력하시오 :");
	scanf("%d",&x);
	
	r = even(x);
	
	if(r==1) printf("입력받은 수는 짝수 입니다");
	else if(r==0) printf("입력받은 수는 홀수 입니다");
     
	return 0;
}

int even(n)
{
  if(n%2 ==0) return 1;
  else return 0;
}
	
	
	
	 
	
	
