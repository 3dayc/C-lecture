#include <stdio.h>

int main(void)
{
	int height, weight, standard_weight ;
	
	printf("Ű�� ü���� �Է��Ͻÿ�(Ű, ü��) :");
	scanf("%d %d",&height, &weight);
	
	standard_weight = (height -100 ) * 0.9 ; 
	
	if(weight > standard_weight) 
	           printf("��ü�� �Դϴ�.\n");
	else if(weight < standard_weight) 
	           printf("��ü�� �Դϴ�.\n"); 
	else  printf("ǥ�� �Դϴ�.\n"); 
	
	return 0;
}
