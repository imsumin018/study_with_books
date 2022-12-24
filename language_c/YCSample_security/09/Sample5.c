#include <stdio.h>

int main(void)
{
   int a;
   int *pA;

   a = 5;
   pA = &a;

   printf("변수 a의 값은 %d입니다. \n", a);

   *pA = 50;

   printf("*pA에 50을 대입했습니다. \n");
   printf("변수 a의 값은 %d입니다. \n", a);

   return 0;
}
