#include <stdio.h>

struct man
{ 
   char name[20];
   int age ;
};

int main(void)
{
	struct man me;
	printf("당신의 이름은 ?");
	scanf("%s",me.name);
	
	printf("당신의 나이는?");
	scanf("%d",&me.age);
	
	printf("당신은 이름이 %s이고 나이는 %d세 이군요", me.name, me.age); 
	
	return 0;
}
