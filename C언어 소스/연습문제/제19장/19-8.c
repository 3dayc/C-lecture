#include <stdio.h>

int main(void)
{
	int i, flag = 0;
	char ch ;
	char word[10][20] = { "champion", "tel", "pencil", "jungol", "olypiad",
                          "class", "information", "lesson", "book", "lion"};
  
    printf("���ڸ� �Է��Ͻÿ�:");
	scanf("%c",&ch);
	
	for(i = 0; i < 10; i++) {
	     if(word[i][0]==ch) {
		             puts(word[i]);
		             flag =1;
	     }
    }
    
    if(flag==0) 
    	printf("ã�� �ܾ �����ϴ�.\n"); 
    	
    return 0;
}
