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
	strcpy(s.name,"정박사");
	s.grade = 4.2;
	
	printf("학번: %d\n",s.number);
	printf("이름: %s\n",s.name);
	printf("학점: %lf\n",s.grade);
	
	return 0;
}
