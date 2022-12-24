#include <stdio.h>
#define SQUARE(x) (x * x)

int main(void)
{
   int num, ans;

   printf("정수를 입력하세요. \n");
   scanf("%d", &num);

   ans = SQUARE(num);

   printf("%d의 2제곱은 %d입니다. \n", num, ans);

   return 0;
}
