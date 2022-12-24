#include <stdio.h>

int main(void)
{
   char str[100];
   int i;

   printf("문자열을 입력하세요. \n");
   scanf_s("%s", str);

   for(i=0; str[i]!='\0'; i++){
      if(str[i] == 'a'){
        str[i] = 'b';
      }
   }

   printf("%s로 치환했습니다. \n", str);

   return 0;
}
