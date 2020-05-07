#include <stdio.h>

int sign(int) ;

int main(void)
{
	int x ;
	int r ;
	printf("숫자를 입력하시오 :");
	scanf("%d",&x);
	
	r = sign(x);
	
	if(r==-1) printf("입력받은 수는 음수 입니다");
	else if(r==1) printf("입력받은 수는 양수 입니다");
	else if(r==0) printf("입력받은 수는 0 입니다.");
	
     
	return 0;
}

int sign(int n)
{
  if(n > 0 ) return 1;
  else if( n < 0 ) return -1 ;
  else if(n==0) return 0;
}
	
	
