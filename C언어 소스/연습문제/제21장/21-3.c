#include <stdio.h>
#define Tri_Area(a,h) (a*h/2)

int main(void)
{
 int m,n;	
 printf("�ﰢ���� �غ�(m)�� ����(n)�� ������ �Է��Ͻÿ� :");
 
 scanf("%d %d",&m,&n);
 
 printf("�ﰢ���� ���̴� = %d\n",Tri_Area(m,n));
 return 0;
}
