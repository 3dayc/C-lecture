#include <stdio.h>

#define STUDENTS 7

int main(void)
{
	int num[STUDENTS];
	int sum = 0;
	int i, ave;
	
	for(i = 0 ;i <STUDENTS; i++)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d",&num[i]);
    }
    
    for( i =0; i< STUDENTS; i++ )
          sum = sum +num[i];
    
	ave = sum /STUDENTS;
	printf("���� ��� = %d\n",ave);
	
	return 0;
}
