#include <stdio.h>

int main(void)
{
	FILE *fp ;
	fp = fopen("test.txt","r");
	  if(fp==NULL)
	      printf("���� ���� ���� \n");
	  else 
	      printf("���� ���� ����\n");
		
	 fclose(fp);
	return 0;
}
