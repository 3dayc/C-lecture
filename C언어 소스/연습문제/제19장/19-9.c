#include <stdio.h>

int main(void)
{
	int inum1, inum2, iresult;
	char cnum1[11], cnum2[11] ;
	
	printf("������ ���ڿ� 2���� �Է��Ͻÿ�: "); 
	scanf("%s %s",cnum1, cnum2);
	
	inum1 = atoi(cnum1);
	inum2 = atoi(cnum2);
	
	iresult = inum1 + inum2 ;
	printf("%d + %d = %d\n",inum1, inum2, iresult);
	
	
	
	return 0;
}
	
	
	 
	
