#include <stdio.h>
int main(void)
{
	FILE *fp ;
	char c;
	
	fp = fopen("test.txt","r");
	if(fp==NULL)
	    printf("���� ���� ����\n");
	else 
	 printf("���� ���� ����\n");
	
	while((c=fgetc(fp)) !=EOF)
	{
	   putchar(c);
    }
    
    fclose(fp);
 return 0;
}

