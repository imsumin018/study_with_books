#include <stdio.h>

/* square 함수 선언 */
int square(int x);

int main(void)
{
   int num, ans;

   printf("정수를 입력하세요. \n");
   scanf("%d", &num);

   ans = square(num);

   printf("%d의 2제곱은 %d입니다. \n", num, ans);

   return 0;
}

/* square 함수 정의 */
int square(int x)
{
   return x * x;
}
