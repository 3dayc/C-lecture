#include <stdio.h>

int main(void)
{
	int meter ;
	int i = 0;
	
	while(i < 100)
	{
		meter = i* 1609 ;
		printf("%d ������ %d ���� �Դϴ�\n",i,meter);
        i++;
    }
	return 0;
}
