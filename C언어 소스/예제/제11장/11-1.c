#include <stdio.h>
int main(void)
{	
	char ch=9;
	int inum=1052;
	double dnum=3.1415;	
	printf("���� ch�� ũ��: %d \n", sizeof ch);  //1
	printf("���� inum�� ũ��: %d \n", sizeof inum); //4
	printf("���� dnum�� ũ��: %d \n", sizeof dnum);  //8

	printf("char�� ũ��: %d \n", sizeof(char));  // 1
	printf("int�� ũ��: %d \n", sizeof(int));    // 4
	printf("long�� ũ��: %d \n", sizeof(long));  //4
	printf("float�� ũ��: %d \n", sizeof(float)); //4
	printf("double�� ũ��: %d \n", sizeof(double)); //8
	return 0;
}

