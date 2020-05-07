#include <stdio.h>

#define STUDENTS 7

int main(void)
{
	int num[STUDENTS];
	int sum = 0;
	int i, ave;
	
	for(i = 0 ;i <STUDENTS; i++)
	{
		printf("성적을 입력하시오: ");
		scanf("%d",&num[i]);
    }
    
    for( i =0; i< STUDENTS; i++ )
          sum = sum +num[i];
    
	ave = sum /STUDENTS;
	printf("성적 평균 = %d\n",ave);
	
	return 0;
}
