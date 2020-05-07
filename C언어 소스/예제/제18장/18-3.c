// example 18-3
//
#include <stdio.h>

int main(void)
{
	int a ;

	int *p  = NULL ;
	p = &a ;
	
	scanf("%d", &a); //12
	printf("a = %d, *p = %d\n",a,*p);
	
	scanf("%d",p); //13
	printf("a = %d, *p = %d\n",a,*p);
	
	a = a+5 ;
	printf("a = %d, *p = %d\n",a,*p);
	
	*p = *p * 2 ;
	printf("a = %d, *p = %d\n",a,*p);
	
	(*p)--;
	printf("a = %d, *p = %d\n",a,*p);

	return 0 ;
}
