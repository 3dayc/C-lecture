#include <stdio.h>

int main(void)
{
  int  height, age ;
  
   printf("Ű�� �Է��Ͻÿ�(cm): ");
   scanf("%d", &height);
   
   printf("���̸� �Է��Ͻÿ� : ");
   scanf("%d", &age);
   
   if(height >= 150 && age >=12 )
       printf("Ÿ�� �����ϴ�\n");
   
   else  
       printf("�˼��մϴ�\n");
       
    return 0;
}

