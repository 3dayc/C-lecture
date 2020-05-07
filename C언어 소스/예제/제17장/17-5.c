//  example 17-5
//

#include <stdio.h>
int main(void)
{
	int num[] = { 1,2,3,4,5,6,7 };
	int i,size ;

	size = sizeof(num)/sizeof(num[0]);
	
	
	
	for(i=0; i<size ; i++ )
	   printf("num[%d] = %d\n",i,num[i]);
	
	return 0;
}
