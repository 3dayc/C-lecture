#include <stdio.h>
#include <string.h>

struct score {
	 char name[20];
	 int kor,eng,math;
};

int main(void)
{
	struct score a, b, sum ;
	printf("두명의 국영수 과목의 점수를 입력하시오\n"); 
	scanf("%s %d %d %d",a.name, &a.kor,&a.eng,&a.math);
	scanf("%s %d %d %d",b.name, &b.kor,&b.eng,&b.math);
	
	strcpy(sum.name,"합계");
	sum.kor = a.kor+b.kor;
	sum.eng = a.eng+b.eng;
	sum.math = a.math+b.math;
	
	printf("=================\n");
	printf("%s %d %d %d\n",a.name,a.kor, a.eng, a.math);
	printf("%s %d %d %d\n",b.name,b.kor, b.eng, b.math);
	printf("%s %d %d %d\n",sum.name,sum.kor, sum.eng, sum.math);
	
	return 0;
}

	
	
	 
	
	
	 
