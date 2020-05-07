#include <stdio.h>
#include <windows.h>

void gotoxy(int, int);

int main(void)
{
 int key;
 int x =40, y=12 ;
 
  for(;;) { 
     gotoxy(x,y);
     printf("A");
	 key = getch();
     if(key==0xe0)
          key = getch();
         
     if(key=='q') break;
      
     switch(key) {
     	case 72: y = y-1 ; // Up
     	break;
     	
     	case 75 : x = x-1 ; //left
     	break;
     	
     	case 77 : x =x+1 ; //right
     	break;
     	
     	case 80 : y = y+1 ; //down
     	break;
       
        default : break;
	 
	  }
 }
}
 

void gotoxy(int x, int y)
{
COORD Pos = { x-1, y-1 };
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}		


