#include <stdio.h>

int main(void)
{
	int i, flag = 0;
	char ch ;
	char word[10][20] = { "champion", "tel", "pencil", "jungol", "olypiad",
                          "class", "information", "lesson", "book", "lion"};
  
    printf("문자를 입력하시오:");
	scanf("%c",&ch);
	
	for(i = 0; i < 10; i++) {
	     if(word[i][0]==ch) {
		             puts(word[i]);
		             flag =1;
	     }
    }
    
    if(flag==0) 
    	printf("찾는 단어가 없습니다.\n"); 
    	
    return 0;
}
