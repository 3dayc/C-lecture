#include <stdio.h>

int main(void)
{
	int day,date;
	
	printf("1.��, 2.ȭ, 3.��, 4.��, 5.��, 6.��, 7.��\n");
	printf("1����  ���� ���� �Դϱ�?");
	scanf("%d",&date); 
	 
	printf("====================\n");
	printf("�� �� ȭ �� �� �� ��\n"); 
	printf("====================\n");
	
	
	for(day = 0 ; day<date; day++)
	 printf("   ");
	 
	for(date = 1 ;date <=31 ;date ++)
	 {
	 	
	 	if(day==7)
	 	{ 
	 	  day = 0;
	 	  printf("\n");
	    }
	    
	    day++;
	    printf("%2d ",date);
    }
    printf("\n===================\n");
    return 0;
}
	 	
	 	
	 	
	 	
