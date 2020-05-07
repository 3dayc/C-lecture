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
		printf("학번을 입력하시오:");
		scanf("%d",&list[i].number);
		printf("이름을 입력하시오:");
		scanf("%s",list[i].name);
		printf("학점을 입력하시오(실수): ");
		scanf("%lf",&list[i].grade);
   }
   
   for(i = 0; i <SIZE;i++)
      printf("이름 :%s, 학점 %f\n",list[i].name, list[i].grade);
	  
	  return 0;
}
   
