#include <stdio.h>
#include <string.h>

struct student {
	  int number ;
	  char name[10];
	  double grade ;
};

int main(void)
{
	struct student s;
	
	s.number = 20180001;
	strcpy(s.name,"���ڻ�");
	s.grade = 4.2;
	
	printf("�й�: %d\n",s.number);
	printf("�̸�: %s\n",s.name);
	printf("����: %lf\n",s.grade);
	
	return 0;
}
