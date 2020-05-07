#include <stdio.h>
#include <windows.h>

void gotoxy(int, int);

int main(void)
{
 int key;
 int x =40, y=12 ;
 int xbak = 0, ybak =0 ;
  for(;;) { 
  
     gotoxy(xbak, ybak); 
     printf(" ");
     gotoxy(x,y);
     printf("A");
     
     xbak = x; 
     ybak = y; 
	 key = getch();
     if(key==0xe0)
          key = getch();
         
     if(key=='q') break;
      
     switch(key) {
     	case 72: y = y-1 ; 
     	break;             
     	
     	case 75 : x = x-1 ;
     	break;
     	
     	case 77 : x =x+1 ;
     	break;
     	
     	case 80 : y = y+1 ;
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


