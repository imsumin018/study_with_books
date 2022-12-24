#include <stdio.h>

/* min 함수 선언 */
int min(int x, int y);

int main(void)
{
   int num1, num2, ans;

   printf("1번째 정수를 입력하세요. \n");
   scanf("%d",&num1);

   printf("2번째 정수를 입력하세요. \n");
   scanf("%d",&num2);

   ans = min(num1, num2);
   
   printf("최소값은 %d입니다. \n", ans);

   return 0;
}

/* min 함수 정의 */
int min(int x, int y)
{
   if (x < y)
      return x;
   else 
      return y;
}
