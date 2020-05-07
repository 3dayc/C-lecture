//  example 17-6
//
#include <stdio.h>
int main(void)
{
	int i;
	int Anum[5] = { 1,2,3,4,5 };
	int Bnum[5] ;

    // Bnum = Anum ;
    
    for(i = 0; i< 5 ;i ++ )
            Bnum[i] = Anum[i];
		
	for(i=0; i<5 ; i++ )
	   printf("Bnum[%d] = %d\n",i,Bnum[i]);
	
	return 0;
}
