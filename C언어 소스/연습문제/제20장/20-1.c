#include <stdio.h>

struct man
{ 
   char name[20];
   int age ;
};

int main(void)
{
	struct man me;
	printf("����� �̸��� ?");
	scanf("%s",me.name);
	
	printf("����� ���̴�?");
	scanf("%d",&me.age);
	
	printf("����� �̸��� %s�̰� ���̴� %d�� �̱���", me.name, me.age); 
	
	return 0;
}
