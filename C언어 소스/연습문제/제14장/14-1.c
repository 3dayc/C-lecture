#include <stdio.h>

int main(void)
{
	
  double w, h ;
  double area, circumference ; 
  
  printf("���簢���� ���θ� �Է��Ͻÿ�:");
  scanf("%lf",&w);
  
  printf("���簢���� ���θ� �Է��Ͻÿ�:");
  scanf("%lf",&h);
  
  area = w * h;
  circumference = 2*w + 2*h ;
  
  printf("���簢���� ������ :%f,  �ѷ��� :%f ",area,circumference); 
  return 0;
  
}
   
