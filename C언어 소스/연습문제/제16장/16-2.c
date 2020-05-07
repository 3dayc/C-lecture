#include <stdio.h>
#include <windows.h>

void gotoxy(int, int);

int main(void)
{
 int x, y;
 for( y = 1; y <= 13 ; y =y+2 ) {
     if( y ==1 || y==13 ) {
	     for(x = 1; x <15 ; x = x+3 )
          {
           gotoxy(x,y);
	       printf("%c%c",0xa1, 0xe1);	
         }
     }
    else {
         gotoxy(1,y) ;
		 printf("%c%c",0xa1, 0xe1); 
		 
		 gotoxy(13,y) ;
		 printf("%c%c",0xa1, 0xe1); 
	}
}
 return 0;
}

void gotoxy(int x, int y)
{
COORD Pos = { x-1, y-1 };
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}
