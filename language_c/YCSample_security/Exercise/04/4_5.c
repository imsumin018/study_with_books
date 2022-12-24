#include <stdio.h>

int main(void)
{
   int sum = 0;
   int num = 0;

   printf("과목 1의 점수를 입력하세요. \n");
   scanf("%d", &num);
   sum += num;

   printf("과목 2의 점수를 입력하세요. \n");
   scanf("%d", &num);
   sum += num;

   printf("과목 3의 점수를 입력하세요. \n");
   scanf("%d", &num);
   sum += num;

   printf("과목 4의 점수를 입력하세요. \n");
   scanf("%d", &num);
   sum += num;

   printf("과목 5의 점수를 입력하세요. \n");
   scanf("%d", &num);
   sum += num;

   printf("5 과목의 합계 점수는 %d점입니다. \n", sum);
   printf("5 과목의 평균 점수는 %f점입니다. \n", (double)sum/5);

   return 0;
}
