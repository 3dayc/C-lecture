#include <stdio.h>

#define SIZE 10

int main(void)
{
	int freq[SIZE] = {0};
	int i, candi ;
	
	while(1)
	{
		printf(" ���(1~10) �������� �����Ͻðڽ��ϱ�?(���� -1):");
		scanf("%d",&candi);
		if(candi ==-1 ) break ;
		freq[candi-1] ++ ;
    }
    
    printf(" ��  Ưǥ���\n");
	
	for(i = 0 ; i <SIZE ; i++ )
	  printf("%3d    %3d\n",i+1,freq[i]);
	  
	 return 0;
}
