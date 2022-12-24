#include <stdio.h>

int main(void)
{
   char str[100];

   printf("문자열을 입력하세요. \n");
   gets_s(str, 100);

   printf("입력한 문자열은 %s입니다. \n", str);

   return 0;
}
