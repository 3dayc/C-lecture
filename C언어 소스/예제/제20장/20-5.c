#include <stdio.h>
#define SIZE 3

struct student {
	int number ;
	char name[20];
	double grade ;
};

int main(void)
{
	struct student list[SIZE];
	int i;
	
	for(i = 0; i < SIZE ;i++)
	{
		printf("�й��� �Է��Ͻÿ�:");
		scanf("%d",&list[i].number);
		printf("�̸��� �Է��Ͻÿ�:");
		scanf("%s",list[i].name);
		printf("������ �Է��Ͻÿ�(�Ǽ�): ");
		scanf("%lf",&list[i].grade);
   }
   
   for(i = 0; i <SIZE;i++)
      printf("�̸� :%s, ���� %f\n",list[i].name, list[i].grade);
	  
	  return 0;
}
   
