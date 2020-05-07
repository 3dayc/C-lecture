#include <stdio.h>

int main(void)
{
	int i;
	char fruits[5][10] = {
		"apple",
		"pear",
		"banana",
		"peach",
		"orange"
    };
    
    for(i = 0 ; i < 5 ; i++ )
      printf("%d 번째 과일: %s \n",i,fruits[i]);
	 
return 0;
}
