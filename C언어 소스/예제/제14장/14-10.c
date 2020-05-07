#include <stdio.h>
int main(void)
{
	int i = 0, j = 0;
	
 	while ( i < 3 ) {
		printf(" ***현재 i = %d ***\n", i);	
		while ( j < 3 ) {
			printf(" 현재 j = %d\n", j);
			j++;
	    }
	    i++;
	    j = 0;
	}
	return 0;
}

