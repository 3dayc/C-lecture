#include <stdio.h>

int main(void)
{
	int i ; 
	char name[3][20];
	
	for( i = 0 ; i< 3; i++ ) {
		  printf("이름을 입력하시오:");
		  scanf("%s",name[i]);
    }
	
	for(i=0;i<3;i++)
	  printf("%d 번째 이름 : %s\n",i,name[i]);
	  
return 0;
}
