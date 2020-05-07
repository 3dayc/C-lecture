#include <stdio.h>
#define Tri_Area(a,h) (a*h/2)

int main(void)
{
 int m,n;	
 printf("삼각형의 밑변(m)과 높이(n)을 정수로 입력하시오 :");
 
 scanf("%d %d",&m,&n);
 
 printf("삼각형의 넓이는 = %d\n",Tri_Area(m,n));
 return 0;
}
