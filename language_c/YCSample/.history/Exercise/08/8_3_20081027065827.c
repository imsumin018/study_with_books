#include <stdio.h>

/* power 함수 선언 */
int power(int x, int y);

int main(void)
{
   int num1, num2, ans;

   printf("1번째 정수를 입력하세요(1~5). \n");
   scanf("%d",&num1);

   printf("2번째 정수를 입력하세요(1~5). \n");
   scanf("%d",&num2);

   ans = power(num1, num2);

   printf("%d의 %d제곱은 %d입니다. \n", num1, num2, ans);

   return 0;
}

/* power 함수 정의 */
int power(int x, int y)
{
   int i;
   int pow = 1; 

   for(i=1; i<=y; i++){
      pow = pow * x;
   }
   return pow;
}
