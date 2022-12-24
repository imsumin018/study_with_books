#include <stdio.h>

int main(void)
{
   double num;
   
   printf("소수를 입력하세요. \n");
   scanf_s("%lf", &num);

   printf("소수점 이하 3자릿수로 출력하면 %.3f입니다. \n", num);

   return 0;
}
