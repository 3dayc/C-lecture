#include <stdio.h>
#include <windows.h>

void gotoxy(int, int);

int main(void)
{
	gotoxy(1,1);
	printf("0");
	
	gotoxy(80,1);
	printf("1");
	
	gotoxy(1,24);
	printf("2");
	
	gotoxy(80,24);
	printf("3");
	return 0 ;
}
		
void gotoxy(int x, int y)
{
COORD Pos = { x-1, y-1 };
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}
