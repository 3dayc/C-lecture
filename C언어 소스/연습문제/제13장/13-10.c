#include <stdio.h>

int main(void)
{
	int a, b, dece ;
	
	printf("ù ��° ������ �Է��Ͻÿ� :");
	scanf("%d", &a);
	 
	printf("�� ��° ������ �Է��Ͻÿ� :");
	scanf("%d", &b); 
	
	dece = a % b ;
	
	if(dece==0) 
	     printf("��� �Դϴ�.\n");
	else 
	     printf("����� �ƴմϴ�.\n");  
	
	return 0;
}
