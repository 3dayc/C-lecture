// �ݺ��� �̿��� ���丮�� ���ϱ� 
#include <stdio.h>
int main(void)
{
  long fact = 1;
  int i, n ;
  
  printf("������ �Է��Ͻÿ�:");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)
       fact = fact * i;
  printf("%d!�� %d�Դϴ�.\n",n,fact);
  
  return 0;
}
