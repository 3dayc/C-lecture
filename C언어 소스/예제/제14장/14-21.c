#include <stdio.h>

int main(void)
{
	char letter ;
	
	for( ;; )
	{
		printf("�ҹ��ڸ� �Է��Ͻÿ� :");
		letter = getch();   // scanf("%c",&letter);
        printf("%c\n",letter); 		
		
		if(letter =='Q')
		break;
		
		if(letter <'a' || letter >'z')
		continue;
		
		letter = letter -32 ;
		printf("��ȯ�� �빮�ڴ� %c�Դϴ�\n\n",letter);
    }
    return 0 ;
}
