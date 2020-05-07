#include <stdio.h>


int x1, x2, x3, x4 ;

void left_move(void); void right_move(void);
int main(void)
{
 int key;

  printf("x1, x2, x3, x4 값을 입력하시오: ");
 scanf("%d %d %d %d",&x1,&x2,&x3,&x4); 
  
  for(;;) { 
    printf("%d  %d  %d  %d\n",x1,x2,x3,x4);
	 key = getch();
     if(key==0xe0)
          key = getch();
         
     if(key=='q') break;
      
     switch(key) {
          	
     	case 75 : left_move();
     	break;
     	
     	case 77 : right_move();
     	break;
     	
        default : break;
	 
	  }
    
 }
}
 

void left_move(void)
{
 int buff ;
 
 buff= x1 ; 
 x1= x2; 
 x2= x3; 
 x3 =x4;
 x4 = buff;
 printf("left move ->");
 }		

void right_move(void)
{
	int buff;

	buff= x4;
	x4 = x3;
	x3 = x2;
	x2 = x1;
	x1 = buff;
	printf("right move->");
}
