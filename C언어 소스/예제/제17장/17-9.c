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
		
		printf("���Ͻô� �¼���ȣ�� �Է��ϼ���(����� -1):");
		scanf("%d",&seat_num);
		
		if(seat_num < 0 )  break;
		
		if( seat_num >SIZE) {
			printf("1���� 10 ������ ���ڸ� �Է��ϼ���\n");
			continue;
	    }
	    
	    if(seats[seat_num-1] == 0 ) { //������� �ʾ�����
		   seats[seat_num-1] = 1 ;
		   printf("����Ǿ����ϴ�.\n\n");
	    }
	    else  // �̹� ����Ǿ�����
		   printf("�̹� ����� �ڸ� �Դϴ�.\n\n");
    }
    return 0;
}
  
		
		  
