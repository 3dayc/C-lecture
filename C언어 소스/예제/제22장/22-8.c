#include <stdio.h>

int main(void)
{
	freopen("input4.txt","r",stdin);
	freopen("output4.txt","w",stdout);
	
	int b, h;
	float area;
	
	while(scanf("%d %d", &b, &h)==2) {
		area = b * h /2.0;
		printf("πÿ∫Ø = %d, ≥Ù¿Ã = %d, ≥–¿Ã = %.2f\n",b,h,area);
    }
    return 0;
}
	
