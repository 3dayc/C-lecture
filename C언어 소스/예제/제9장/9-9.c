#include <stdio.h>
int main(void)
{
	float   radius ; //원의 반지름
    float   area;     // 면적 

           printf("반지름을 입력하시오 : ");
           scanf("%f", &radius);

           area = 3.14 * radius * radius ;
           printf("원의 면적 : %f\n",area);
            return 0 ;
	
}

