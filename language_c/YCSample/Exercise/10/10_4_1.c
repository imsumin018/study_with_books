#include <stdio.h>

/* length 함수의 선언 */
int length(char *str);

int main(void)
{
   char str[100];
   int ans;

   printf("문자열을 입력하세요. \n");
   scanf_s("%s", str, 100);

   ans = length(str);

   printf("문자열의 길이는 %d입니다. \n", ans);

   return 0;
}

/* length 함수의 정의 */
int length(char *str)
{
   int c = 0;

   c = 0;

   while(*str){
      c++;
      str++;
   }

   return c;
}
