#include <stdio.h>

int main(void)
{
   int res; 

   printf("정수를 입력하세요. \n");

   scanf("%d", &res);

   if (res == 1)
      printf("1이 입력되었습니다. \n");

   printf("처리를 종료합니다. \n");

   return 0;
}
