#include <stdio.h>
#include <string.h>

struct point
{
  double x, y ;
} ;

struct point p1, p2, p3,p4;

struct point Mcenter(struct point, struct point, struct point);

int main(void)
{
	printf("세 점의 좌표를 입력하시오\n"); 
	scanf("%lf %lf",&p1.x, &p1.y);
	scanf("%lf %lf",&p2.x, &p2.y);
	scanf("%lf %lf",&p3.x, &p3.y);
	
	p4 = Mcenter(p1, p2,p3);
	
	printf("==================\n");
	printf("무게 중심좌표는 : %.1lf  %.1lf ",p4.x, p4.y); 
	
     return 0;
}

struct point Mcenter( a, b, c )
struct point a, b, c;
{
	struct point m ;
	
	m.x = (a.x + b.x+c.x) /3.0;
	
	m.y = (a.y + b.y+c.y) /3.0;
		
	return m;
}
	 

