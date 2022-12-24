#include <stdio.h>

int main(void)
{
   int num;

   num = 3;

   printf("변수 num의 값은 %d입니다. \n", num);

   num = 5;

   printf("변수 num의 값을 변경했습니다. \n");
   printf("변수 num의 새로운 값은 %d입니다. \n", num);

   return 0;
}
