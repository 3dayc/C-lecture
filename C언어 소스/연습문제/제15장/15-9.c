#include <stdio.h>
#include <math.h>

double get_distance(double, double, double, double);

int main(void)
{
	int x1, y1, x2, y2 ; 
	double d;
	
	printf("첫 번째 점의  좌표를 입력하시오 :(x, y) ");
	scanf("%d %d",&x1, &y1);
	
	printf("두 번째 점의 좌표를 입력하시오 :(x, y) ");
	scanf("%d %d",&x2, &y2);
	
	d = get_distance(x1, y1, x2, y2);
	
	printf("두 점 사이의 거리는 %f 입니다.\n",d); 
	
	return 0;
}

double get_distance( double x_1, double y_1, double x_2, double y_2)
{
	double dist ;
	
	dist = sqrt((x_1-x_2)*(x_1-x_2) + (y_1-y_2) * (y_1-y_2));
	
	return dist;
}
	 
