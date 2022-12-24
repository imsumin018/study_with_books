#include <stdio.h>

int main(void)
{
   int num1 = 2;
   int num2 = 3;
   int sum = num1+num2;

   printf("변수 num1의 값은 %d입니다. \n", num1);
   printf("변수 num2의 값은 %d입니다. \n", num2);
   printf("num1+num2의 값은 %d입니다. \n", sum);

   num1 = num1+1;

   printf("변수 num1의 값에 1을 더하면 %d입니다. \n", num1);

   return 0;
}
