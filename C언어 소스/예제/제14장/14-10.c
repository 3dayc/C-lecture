#include <stdio.h>
int main(void)
{
	int i = 0, j = 0;
	
 	while ( i < 3 ) {
		printf(" ***���� i = %d ***\n", i);	
		while ( j < 3 ) {
			printf(" ���� j = %d\n", j);
			j++;
	    }
	    i++;
	    j = 0;
	}
	return 0;
}

