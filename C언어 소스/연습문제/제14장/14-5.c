#include <stdio.h>

int main(void)
{
	int day,date;
	
	printf("1.월, 2.화, 3.수, 4.목, 5.금, 6.토, 7.일\n");
	printf("1일은  무슨 요일 입니까?");
	scanf("%d",&date); 
	 
	printf("====================\n");
	printf("일 월 화 수 목 금 토\n"); 
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
	 	
	 	
	 	
	 	
