#include <stdio.h>

int main(void)
{
	int i=0, r=0, n=0;
	float sum = 1;
	
    printf("실수의 값을 입력하시오 :");
	scanf("%d",&r); 
	printf("거듭제곱의 횟수를 입력하시오 :");
	scanf("%d",&n);
	
	for( i =1 ; i <=n ; i ++ ) {
		sum = sum * r;
    }
    
    printf("결과 값은 %f \n",sum);
	return 0;
}
