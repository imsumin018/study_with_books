#include <stdio.h>

int main(void)
{
   int res;
   char ans;

   printf("몇 번째를 선택할까요? \n");
   printf("정수를 입력하세요. \n");

   scanf("%d", &res);

   ans = (res==1) ? 'A' : 'B'; 

   printf("%c코스를 선택했습니다. \n", ans);

   return 0;
}
