#include <stdio.h>
#include <string.h>

struct point
{
  double x, y ;
} ;

struct point p1, p2, p3 ;

struct point center(struct point, struct point);

int main(void)
{
	printf("두 점의 좌표를 입력하시오\n"); 
	scanf("%lf %lf",&p1.x, &p1.y);
	scanf("%lf %lf",&p2.x, &p2.y);
	
	p3 = center(p1, p2);
	
	printf("==================\n");
	printf("중심좌표는 : %.1lf  %.1lf ",p3.x, p3.y); 
	
     return 0;
}

struct point center(struct point a, struct point b)
{
	struct point c ;
	
	c.x = (a.x + b.x) /2.0;
	
	c.y = (a.y + b.y) /2.0;
		
	return c;
}
	 

