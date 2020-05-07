#include <stdio.h>

int max(int, int, int);
int min(int, int, int);

int main(void)
{
	int Mx, Mn;
	int a, b, c;
	
	printf("세 개의 정수를 입력하시오 : ");
	scanf("%d %d %d",&a,&b,&c);
	
	Mx = max(a, b, c);
	Mn = min(a, b, c);
	
	printf("최대 값 = %d  최소 값 = %d\n",Mx, Mn);
	return 0;
}

int max(int x1, int x2, int x3)
{
	int MAX ;
	
	MAX = x1;
	if(x2 > MAX ) MAX = x2;
	if(x3 > MAX ) MAX = x3 ;
   
     return MAX ;
}
	
int min(int x1, int x2, int x3)
{
	int MIN ;
	
	MIN = x1;
	if(x2 < MIN ) MIN = x2;
	if(x3 < MIN ) MIN = x3 ;
   
     return MIN ;
}	
	
