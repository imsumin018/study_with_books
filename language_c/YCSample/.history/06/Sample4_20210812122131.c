#include <stdio.h>

int main(void)
{
   int num, sum;
   int i;

   num = 0;
   sum = 0;

   printf("몇까지의 합계를 계산할까요? \n");
   scanf_s("%d", &num);

   for(i=1; i<=num; i++){
      sum += i; 
   }

   printf("1부터 %d까지의 합계는 %d입니다. \n", num, sum);

   return 0;
}
