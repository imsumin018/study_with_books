#include <stdio.h>
#include <string.h>

int main(void)
{
   char str1[100];
   char str2[100];

   printf("1번째 문자열을 입력하세요. \n");
   scanf("%s", str1);

   printf("2번째 문자열을 입력하세요. \n");
   scanf("%s", str2);

   if(strcmp(str1, str2) == 0){
      printf("2개의 문자열은 같습니다. \n");
   }
   else
   {
      printf("2개의 문자열은 다릅니다. \n");
   }
   return 0;
}
