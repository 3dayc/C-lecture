#include <stdio.h>

void func(void);
int main(void)
{
	int  i;
	
	for(i = 0 ; i< 4 ;i ++ )
	                   func();
	
	return 0 ;
}

void func(void)
{
	int auto_cnt = 0;
	static int static_cnt = 0;
	
	auto_cnt = auto_cnt +1;
	static_cnt = static_cnt + 1;
	
	printf("auto_cnt = %d\n",auto_cnt);
	printf("static_cnt = %d\n",static_cnt);
}
	
	
