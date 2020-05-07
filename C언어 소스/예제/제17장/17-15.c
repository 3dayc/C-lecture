// example 17-15
// 

#include <stdio.h>
#define YEARS 3
#define MONEY 5

int sum(int [][MONEY]);

int main(void)
{
	int deposit[YEARS][MONEY] = 
	   {{ 1,2,3} ,{4,5,6}, {7,8,9} };
	int total_money;
	
	total_money = sum(deposit);
	printf("총 저금은 %d 입니다.\n",total_money);
	
	return 0;
}

int sum(int list[][MONEY])
{
	int y, p;
	int total = 0;
	
	for(y=0; y <YEARS; y++)
	 for(p=0; p <MONEY ; p++ )
	     total += list[y][p];
	
	return total;
}
	
	
