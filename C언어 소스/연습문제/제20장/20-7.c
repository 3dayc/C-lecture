#include <stdio.h>

struct money
{
 int num ;
 int won ;
};

struct money max(struct money [], int );

int main(void)
{
  struct money save[5], MoneyKing;
  int i;

  for(i =0; i<5 ; i++ ){
      printf("%d ���� ����ݾ�:",i+1);
	  save[i].num = i+1;
	  scanf("%d",&save[i].won);
 }
 MoneyKing = max(save,5);
 printf("=====================\n");
 printf("����� %d�� �ݾ� :%d ��\n",MoneyKing.num,MoneyKing.won);
 
 return 0;
}
  
struct money max(struct money arr[], int n)
{
  struct money MaxMoney = arr[0] ;
  int i;
  
  for(i = 1; i< n ; i++ ) {
     if(MaxMoney.won <arr[i].won) {
	       MaxMoney = arr[i] ;
     }
   }
   return MaxMoney;
}

  
    	

