#include <stdio.h>
#include "myfunc.h"

int main(void)
{
   int num1, num2, ans;

   printf("1번째 정수를 입력하세요(1~5). \n");
   scanf_s("%d",&num1);

   printf("2번째 정수를 입력하세요(1~5). \n");
   scanf_s("%d",&num2);

   ans = power(num1, num2);

   printf("%d의 %d제곱은 %d입니다. \n", num1, num2, ans);

   return 0;
}
