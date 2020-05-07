#include <stdio.h>

int main(void)
{
	
  double w, h ;
  double area, circumference ; 
  
  printf("직사각형의 가로를 입력하시오:");
  scanf("%lf",&w);
  
  printf("직사각형의 세로를 입력하시오:");
  scanf("%lf",&h);
  
  area = w * h;
  circumference = 2*w + 2*h ;
  
  printf("직사각형의 면적은 :%f,  둘레는 :%f ",area,circumference); 
  return 0;
  
}
   
