#include <stdio.h>

int coin_toss(void);
int main(void)
{
	 int toss = 0;
	 int heads = 0;
	 int tails = 0;
	 srand((unsigned) time(NULL));
	 
	 for(toss = 0; toss <100 ;toss++){
	 	if(coin_toss()==1) heads++;
	 	else tails++;
     }
    
     printf("동전의 앞면: %d \n",heads);
	 printf("동전의 뒷면: %d \n",tails);
	 
	 return 0;
}


int coin_toss(void)
{
	int i ;
	
	i = rand() %2 ;
	if(i==0) 
	     return 0;
	else 
	     return 1;
}
	
	
	
	
