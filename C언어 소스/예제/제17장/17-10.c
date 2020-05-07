// example 17-10
//
#include <stdio.h>
#define SIZE 5

int average(int [] , int);

int main(void)
{
	int num[SIZE] = { 1,2,3,4,5};
	int avg ;
	int s = SIZE ;
	int i;
	
	avg = average(num, s);

   	printf("평균은 %d 입니다.\n",avg);
	
	return 0;
}

int average(int score[], int n)
{
	int i;
	int sum = 0;
	
	for(i = 0;i<n; i++ )
	       sum += score[i];
	sum = sum /n ;
	

	return sum;
}
