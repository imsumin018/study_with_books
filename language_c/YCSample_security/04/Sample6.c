#include <stdio.h>

int main(void)
{
   int sum = 0;
   int num = 0;

   printf("1번째 정수를 입력하세요. \n");
   scanf("%d", &num);
   sum += num;

   printf("2번째 정수를 입력하세요. \n");
   scanf("%d", &num);
   sum += num;

   printf("3번째 정수를 입력하세요. \n");
   scanf("%d", &num);
   sum += num;

   printf("3가지 수의 합계는 %d입니다. \n", sum);

   return 0;
}
