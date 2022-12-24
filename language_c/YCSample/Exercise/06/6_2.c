#include <stdio.h>

int main(void)
{
   int num = 0;
   int sum = 0;

   do{
      printf("시험 점수를 입력하세요. (0이면 종료)\n");
      scanf_s("%d", &num);
      sum += num;
   }while(num);

   printf("시험 점수의 합계는 %d입니다. \n", sum);

   return 0;
}
