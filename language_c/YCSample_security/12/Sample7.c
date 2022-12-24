#include <stdio.h>

int main(void)
{
   int ch;

   printf("문자를 계속 입력하세요. \n");

   while((ch=getchar()) != EOF){
      putchar(ch);
   }

   return 0;
}
