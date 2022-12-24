#include <stdio.h>

int main(void)
{
   int a;
   int *pA;

   a = 5;
   pA = &a;

   printf("변수 a의 값은 %d입니다. \n", a);
   printf("변수 a의 어드레스는 %p입니다. \n", &a);
   printf("포인터 pA의 값은 %p입니다.\n", pA);	

   return 0;
}
