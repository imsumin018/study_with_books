#include <stdio.h>

int main(void)
{
   int num1, num2;

   num1 = 3;

   printf("변수 num1의 값은 %d입니다. \n", num1);

   num2 = num1;			

   printf("변수 num1의 값을 변수 num2에 대입했습니다. \n");
   printf("변수 num2의 값은 %d입니다. \n", num2);

   return 0;
}
