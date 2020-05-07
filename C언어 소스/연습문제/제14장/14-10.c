#include <stdio.h>

int main(void)
{
	char op=0 ;
	int r=0, n1=0, n2=0 ; 
	
	printf("************** \n");
	printf("A ---- Add     \n");
	printf("S ---- Subtract\n");
	printf("M ---- Multiply\n");
	printf("D ---- Divide  \n");
	printf("Q ---- Quit    \n");
	printf("************** \n");			

	do {
	   printf("연산을 선택하시오 :");	
   	  // scanf("%c",&op);
	   op = getch();
	   printf("%c\n",op);
	
	printf("두수를 공백으로 분리하여 입력하시오 :"); 
	scanf("%d  %d",&n1,&n2);
	
	switch(op) {
	   case 'A':
	   case 'a': r = n1 + n2 ;
	   break;
	   
	   case 'S':
	   case 's': r = n1 - n2;
	   break;
	   
	   case 'M':
	   case 'm': r = n1 * n2 ;
	   break;
	   
	   case 'D':
	   case 'd': r = n1/ n2 ;
	   	
	   default : break;
    }
	 if(op=='q' || op=='Q') break;	
     printf("연산의 결과는 %3d 입니다\n\n",r);		
  } while(1);

return 0;
}

