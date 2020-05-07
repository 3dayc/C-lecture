#include <stdio.h>

int main(void)
{
	int i = 0;
	do 
	{
		printf("1---새로 만들기\n");
		printf("2---파일 열기\n");
		printf("3---파일 닫기\n"); 
		printf("하나를 선택하시오.\n");
		
		scanf("%d",&i);
		
    } while( i< 1 || i >3);
	
	printf("선택된 메뉴 = %d\n",i);
	return 0;
 }
