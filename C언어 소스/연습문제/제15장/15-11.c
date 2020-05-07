#include <stdio.h>

void is_prime(int , int);

int main(void)
{
	int a, b ; 
	printf(" 두 정수를 입력하시오 :");
	scanf("%d %d",&a,&b);
	
	is_prime(a, b);
	
	return 0;
}
	 

void is_prime(int x1, int x2)
{
	int i, j ;
    int count = 0;
	
	for(i = x1; i <=x2 ;i ++ ) {
		count = 0;
		for(j = 1 ; j <=i ; j++ ) {
			//printf("%d/%d = %d\n",i,j,i%j);
			if( i % j == 0 ) count++;
	    }
	    
	    if(count ==2) 
	        printf("%3d",i);
	     //printf("%3d\n",i);
	         
		}
  

}
	
