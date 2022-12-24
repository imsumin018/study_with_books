#include <stdio.h>

int main(void)
{
   double height, weight;

   printf("키와 몸무게를 입력하세요. \n");

   scanf_s("%lf", &height);
   scanf_s("%lf", &weight);

   printf("키는 %f cm : 몸무게는 %f Kg입니다. \n", height, weight);

   return 0;
}
