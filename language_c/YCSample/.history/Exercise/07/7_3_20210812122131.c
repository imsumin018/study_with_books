#include <stdio.h>

int main(void)
{
   char str[100];
   int i, c;

   c = 0;

   printf("문자열을 입력하세요. \n");
   scanf_s("%s", str);

   for(i=0; str[i]!='\0'; i++){
     c++;
   }

   printf("문자열 크기는 %d입니다. \n", c);

   return 0;
}
