//  example 17-7
//
#include <stdio.h>
int main(void)
{
	int i;
	int Anum[5] = { 1,2,3,4,5 };
	int Bnum[5] = { 1,2,3,4,5 };

  /*  if(Bnum != Anum) {
	        printf(" 다릅니다 "); 
	         return 0;
    }
    */
    for(i = 0; i< 5 ;i ++ ) {
    
		if(Bnum[i] != Anum[i]){ 
		      printf("다릅니다\n");
	          return 0; // 프로그램 종료 
	    }
	 }
	printf("같습니다\n");	
	return 0;
}
