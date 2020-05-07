#include <stdio.h>

int main(void)
{
	char letter ;
	
	for( ;; )
	{
		printf("소문자를 입력하시오 :");
		letter = getch();   // scanf("%c",&letter);
        printf("%c\n",letter); 		
		
		if(letter =='Q')
		break;
		
		if(letter <'a' || letter >'z')
		continue;
		
		letter = letter -32 ;
		printf("변환된 대문자는 %c입니다\n\n",letter);
    }
    return 0 ;
}
