#include <time.h>
#include <stdio.h>

int main(void)
{
	time_t now ;
	time(&now);
	
	printf("현재 날짜와 시간:%s",asctime(localtime(&now)));
	printf("현재 날짜와 시간 :%s", ctime(&now));
    return 0;
}
