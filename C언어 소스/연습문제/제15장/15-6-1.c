#include <stdio.h>

int even(int) ;

int main(void)
{
	int x ;
	int r ;
	printf("���ڸ� �Է��Ͻÿ� :");
	scanf("%d",&x);
	
	r = even(x);
	
	if(r==1) printf("�Է¹��� ���� ¦�� �Դϴ�");
	else if(r==0) printf("�Է¹��� ���� Ȧ�� �Դϴ�");
     
	return 0;
}

int even(n)
{
  if(n%2 ==0) return 1;
  else return 0;
}
	
	
	
	 
	
	
