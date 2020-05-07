#include <stdio.h>

void print_10to2(int);
    
int main(void)
{
    int num ;
    printf("수를 입력하시오 : ");
    scanf("%d",&num);
    // num = 127;
    print_10to2(num);  // 이 함수를 작성 하시오
    return 0;
}

/*
void print_10to2(int x)
{
	int buff ;    
	
	buff = x /128 ;
    if(buff==1 ) { printf("1"); x = x-128; }
	else         { printf("0"); } //0
	
	buff = x /64 ;
    if(buff==1 ) { printf("1"); x = x-64; } // 1 ,x=63
	else         {  printf("0"); }

    buff = x /32 ;
    if(buff==1 ) { printf("1"); x = x-32; } //1, x=31
	else         {  printf("0"); }
	
	buff = x /16 ;
    if(buff==1 ) { printf("1"); x = x-16; } //1, x=15
	else         {  printf("0"); }
	
	buff = x /8 ;
    if(buff==1 ) { printf("1"); x = x-8; } //1, x= 7
	else         {  printf("0"); }
	
	buff = x /4 ;
    if(buff==1 ) { printf("1"); x = x-4; } //1, x =3
	else         {  printf("0"); }
	
	buff = x /2 ;
    if(buff==1 ) { printf("1"); x = x-2; } //1, x= 1
	else         {  printf("0"); }
	
	buff = x /1 ;
    if(buff==1 ) { printf("1");  } // 1, 
	else         {  printf("0"); }	
	

}
*/

void print_10to2(int x)
{
	
	if (x > 0)
	{
		print_10to2(x/2);
		printf("%d",x%2);
    }
    
}

