#include <stdio.h>

struct man
{ 
   char name[20];
   int age ;
};

int main(void)
{
	struct man me={"정재문",24}, friend;
	printf("친구의 이름과 나이는?? ");
	scanf("%s %d",friend.name,&friend.age);
	
	
	printf("당신은 이름 : %s, 나이 : %d\n", me.name, me.age); 
	printf("친구의 이름 : %s, 나이 : %d", friend.name, friend.age); 
	return 0;
}
