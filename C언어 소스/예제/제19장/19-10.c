#include <stdio.h>

int main(void)
{
	char c;
	while(1)
	{
	 c= getch();
	 if(c=='q') break;
		printf("-----------------\n");
		printf("isdigit(%c) = %d\n",c,isdigit(c));
		printf("isalpha(%c) = %d\n",c,isalpha(c));
		printf("-----------------\n");
    }
	return 0;
}
