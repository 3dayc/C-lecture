#include <stdio.h>

int main(void)
{
	int time, age, fee ;
	
	printf("현재 시간과 나이를 입력하시오( 시간, 나이) :");
	scanf("%d %d",&time, &age);
	
	if(time <= 17 ) {
		    if( (age >= 3 && age <=12) || age >=65 )
		           fee = 25000;
		    else if(age <=2 ) 
		                fee = 0;
		    else            
			       fee = 34000;
    }
    else {
    	 if(age <=2 )
    	    fee = 0;
    	 else 
		    fee  = 10000;
    }   
    printf(" 요금은 %d 입니다 ",fee); 
    
    return 0;
}
	
		
