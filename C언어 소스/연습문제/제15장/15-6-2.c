#include <stdio.h>

int sign(int) ;

int main(void)
{
	int x ;
	int r ;
	printf("���ڸ� �Է��Ͻÿ� :");
	scanf("%d",&x);
	
	r = sign(x);
	
	if(r==-1) printf("�Է¹��� ���� ���� �Դϴ�");
	else if(r==1) printf("�Է¹��� ���� ��� �Դϴ�");
	else if(r==0) printf("�Է¹��� ���� 0 �Դϴ�.");
	
     
	return 0;
}

int sign(int n)
{
  if(n > 0 ) return 1;
  else if( n < 0 ) return -1 ;
  else if(n==0) return 0;
}
	
	
