#include <stdio.h>

int main(void)
{
	float base, height, area ;
	
	printf("�ﰢ���� �غ� :");
	scanf("%f",&base); 
	
	printf("�ﰢ���� ���� :");
	scanf("%f",&height); 
	
	area = 0.5 * height * base ;
	printf("�ﰢ���� ����: %.1f",area);
 
    return 0 ;
}
	
