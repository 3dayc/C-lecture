//  example 17-9
//

#include <stdio.h>
#define SIZE 10

int main(void)
{
	int seat_num, i ;
	int seats[SIZE] = { 0 } ;
	
	for( ;; )
	{
		printf("-------------------------------\n");
		printf("  1  2  3  4  5  6  7  8  9  10\n");
		printf("-------------------------------\n");
		
		for(i = 0;i<SIZE; i++ )
		  printf("  %d",seats[i]);
		printf("\n");
		
		printf("원하시는 좌석번호를 입력하세요(종료는 -1):");
		scanf("%d",&seat_num);
		
		if(seat_num < 0 )  break;
		
		if( seat_num >SIZE) {
			printf("1부터 10 사이의 숫자를 입력하세요\n");
			continue;
	    }
	    
	    if(seats[seat_num-1] == 0 ) { //예약되지 않았으면
		   seats[seat_num-1] = 1 ;
		   printf("예약되었습니다.\n\n");
	    }
	    else  // 이미 예약되었으면
		   printf("이미 예약된 자리 입니다.\n\n");
    }
    return 0;
}
  
		
		  
