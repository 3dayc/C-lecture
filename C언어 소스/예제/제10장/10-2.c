#include <stdio.h>
int main(void)
{
	int x = 9;  //1001
    int y =10 ; //1010

          printf("��Ʈ AND = %08X\n", x&y);
          printf("��Ʈ OR = %08X\n", x|y);
          printf("��Ʈ XOR = %08X\n", x^y);
          printf("��Ʈ NOT = %08X\n", ~x);

    return 0 ;
}

