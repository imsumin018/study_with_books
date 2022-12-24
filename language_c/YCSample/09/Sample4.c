#include <stdio.h>

int main(void)
{
   int a, b;
   int *pA;

   a = 5;
   b = 10;

   pA = &a;

   printf("변수 a의 값은 %d입니다. \n", a);
   printf("포인터 pA의 값은 %p입니다. \n", pA);	
   printf("*pA의 값은 %d입니다. \n", *pA);	

   pA = &b;

   printf("변수 b의 값은 %d입니다. \n", b);
   printf("포인터 pA의 값은 %p로 변경됐습니다. \n", pA);	
   printf("*pA의 값은 %d입니다. \n", *pA);	

   return 0;
}
