#include <stdio.h>

/* sum 함수 정의 */
int sum(int x, int y)
{
   int z;
   
   z= x+y;

   return z;
}

int main(void)
{
   int num1, num2, ans;

   printf("1번째 정수를 입력하세요. \n");
   scanf_s("%d",&num1);

   printf("2번째 정수를 입력하세요. \n");
   scanf_s("%d",&num2);

   ans = sum(num1, num2);
   
   printf("합계는 %d입니다. \n", ans);

   return 0;
}
