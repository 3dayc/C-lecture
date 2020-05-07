#include <stdio.h>
int main(void)
{	
	char ch=9;
	int inum=1052;
	double dnum=3.1415;	
	printf("변수 ch의 크기: %d \n", sizeof ch);  //1
	printf("변수 inum의 크기: %d \n", sizeof inum); //4
	printf("변수 dnum의 크기: %d \n", sizeof dnum);  //8

	printf("char의 크기: %d \n", sizeof(char));  // 1
	printf("int의 크기: %d \n", sizeof(int));    // 4
	printf("long의 크기: %d \n", sizeof(long));  //4
	printf("float의 크기: %d \n", sizeof(float)); //4
	printf("double의 크기: %d \n", sizeof(double)); //8
	return 0;
}

