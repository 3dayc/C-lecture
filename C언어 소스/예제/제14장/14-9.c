#include <stdio.h>
int main(void)
{
	int num = 0, cnt = 1;
	printf("3�� ����� ����: ");
	
    scanf("%d", &num);
    
    while(cnt<=num) {
            printf("%d  ", 3*cnt);
            cnt ++;
    }
	return 0;
}

