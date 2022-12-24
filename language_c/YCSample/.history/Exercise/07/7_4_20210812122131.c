#include <stdio.h>

int main(void)
{
   char str[100];
   int i, c;

   printf("문자열을 입력하세요. \n");
   scanf_s("%s", str);

   c = 0;

   for(i=0; str[i]!='\0'; i++){
      if(str[i] == 'a'){
        c++;
      }
   }

   printf("%s 안에 a는 %d개 있습니다. \n", str, c);

   return 0;
}
