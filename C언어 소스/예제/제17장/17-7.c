//  example 17-7
//
#include <stdio.h>
int main(void)
{
	int i;
	int Anum[5] = { 1,2,3,4,5 };
	int Bnum[5] = { 1,2,3,4,5 };

  /*  if(Bnum != Anum) {
	        printf(" �ٸ��ϴ� "); 
	         return 0;
    }
    */
    for(i = 0; i< 5 ;i ++ ) {
    
		if(Bnum[i] != Anum[i]){ 
		      printf("�ٸ��ϴ�\n");
	          return 0; // ���α׷� ���� 
	    }
	 }
	printf("�����ϴ�\n");	
	return 0;
}
