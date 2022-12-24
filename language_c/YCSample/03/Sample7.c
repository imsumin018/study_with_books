#include <stdio.h>

int main(void)
{
   char ch;

   printf("문자를 입력하세요(영문과 숫자). \n");

   ch = getchar(); 

   printf("%c가 입력되었습니다. \n", ch);

   return 0;
}
