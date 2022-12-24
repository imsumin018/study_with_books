#include <stdio.h>

int main(void)
{
   double pi;

   printf("원주율은? \n");
   scanf_s("%lf", &pi);

   printf("원주율은 %f입니다. \n", pi);

   return 0;
}
