#include <stdio.h>

int main(void)
{
	int time, age, fee ;
	
	printf("���� �ð��� ���̸� �Է��Ͻÿ�( �ð�, ����) :");
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
    printf(" ����� %d �Դϴ� ",fee); 
    
    return 0;
}
	
		
