#include <stdio.h>

int main(void)
{
	int x, y ;
	
	printf("��ǥ (x, y) : ");
	scanf("%d %d",&x,&y);
	
	if(x>0 && y >0 )
	    printf(" 1��и� \n");
	else if(x<0 && y >0 )
	    printf(" 2��и� \n");
	else if(x<0 && y <0 )
	    printf(" 3��и� \n");
	else if(x>0 && y <0 )
	    printf(" 4��и� \n");
	
	return 0;
}
