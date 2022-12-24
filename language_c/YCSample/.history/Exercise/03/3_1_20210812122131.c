#include <stdio.h>

int main(void)
{
   int num;

   printf("당신은 몇 살입니까? \n");
   scanf_s("%d", &num);

   printf("당신은 %d살 입니다. \n", num);

   return 0;
}
