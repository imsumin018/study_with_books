#include <stdio.h>

int main(void)
{
   int a = 0;
   int b = 0;

   b = a++;

   printf("대입 후에 증가했기 때문에 b의 값은 %d입니다. \n", b);

   return 0;
}
