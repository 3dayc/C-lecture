#include <stdio.h>

struct man
{ 
   char name[20];
   int age ;
};

int main(void)
{
	struct man me={"���繮",24}, friend;
	printf("ģ���� �̸��� ���̴�?? ");
	scanf("%s %d",friend.name,&friend.age);
	
	
	printf("����� �̸� : %s, ���� : %d\n", me.name, me.age); 
	printf("ģ���� �̸� : %s, ���� : %d", friend.name, friend.age); 
	return 0;
}
