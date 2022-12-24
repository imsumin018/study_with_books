#include <stdio.h>

int main(void)
{
   int num1, num2;

   printf("정수 1을 입력하세요. \n");

   scanf("%d", &num1);

   printf("정수 2를 입력하세요. \n");

   scanf("%d", &num2);

   printf("덧셈 결과는 %d입니다. \n", num1+num2);

   return 0;
}
