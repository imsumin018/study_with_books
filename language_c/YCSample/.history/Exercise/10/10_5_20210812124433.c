#include <stdio.h>
#include <ctype.h>

int main(void)
{
   char str[100];
   int i, j;

   printf("문자열을 입력하세요. \n");
   scanf_s("%s", str, 100);

   for(i=0; str[i]!='\0'; i++){
      str[i] = toupper(str[i]);
   }
   printf("대문자로 변환하면 %s입니다. \n", str);

   for(j=0; str[j]!='\0'; j++){
      str[j] = tolower(str[j]);
   }

   printf("소문자로 변환하면 %s입니다. \n", str);

   return 0;
}
