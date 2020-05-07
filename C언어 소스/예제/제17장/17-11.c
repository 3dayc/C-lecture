// example 17-11
//
#include <stdio.h>
#define SIZE 7

void plus_array(int [], int );
void print_array(int [], int );

int main(void)
{
	int list[SIZE] = { 1,2,3,4,5,6,7,};
	
	print_array(list,SIZE);
	plus_array(list,SIZE);
	print_array(list,SIZE);
	
	return 0 ;
}

void plus_array(int a[], int size)
{
	int i ;
	
	for(i = 0 ; i <size; i++ )
	      a[i] = a[i] + 10 ;
}

void print_array(int a[], int size)
{
	int i;
	
	for(i=0;i<size;i++)
	   printf("%3d ",a[i]);
	
	printf("\n");
}
	      


