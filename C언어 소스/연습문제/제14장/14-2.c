#include <stdio.h>

int main(void)
{
	int number, min = 10000 ;
	
	printf("������ �Է��Ͻÿ�\n ����� Ctrl+z\n");
	
	while(scanf("%d",&number) !=EOF)
	{
	  if(number < min )
	             min = number ;
    }
    
    printf("�ּҰ��� %d\n",min); 

	return 0;
}
