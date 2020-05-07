#include <stdio.h>

int main(void)
{
	int height, weight, standard_weight ;
	
	printf("키와 체중을 입력하시오(키, 체중) :");
	scanf("%d %d",&height, &weight);
	
	standard_weight = (height -100 ) * 0.9 ; 
	
	if(weight > standard_weight) 
	           printf("과체중 입니다.\n");
	else if(weight < standard_weight) 
	           printf("저체중 입니다.\n"); 
	else  printf("표준 입니다.\n"); 
	
	return 0;
}
