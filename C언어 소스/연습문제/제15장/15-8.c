#include <stdio.h>

int is_leap(int) ;

int main(void)
{
	int y ;
	int day ;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &y);
	
	day = is_leap(y);
	
	printf("%d ����  %d �� �Դϴ�\n",y,day); 
	
	return 0 ;
}

int is_leap(int year)
{
	if((year % 4 ==0 && year %100 !=0) || year % 400 ==0 )
	   return 366;
	else 
	   return 365;
}
	
	
