#include <time.h>
#include <stdio.h>

int main(void)
{
	time_t now ;
	time(&now);
	
	printf("���� ��¥�� �ð�:%s",asctime(localtime(&now)));
	printf("���� ��¥�� �ð� :%s", ctime(&now));
    return 0;
}
