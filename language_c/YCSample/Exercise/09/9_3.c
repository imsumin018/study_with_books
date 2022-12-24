#include <stdio.h>

/* add 함수의 선언 */
void add(int *x1, int *x2, int a);

int main(void)
{
   int num1 = 0;
   int num2 = 0;
   int ad = 0;

   printf("두 과목의 점수를 입력하세요. \n");
   scanf_s("%d", &num1);
   scanf_s("%d", &num2);

   printf("더할 점수를 입력하세요. \n");
   scanf_s("%d", &ad);

   add(&num1, &num2, ad);

   printf("%d점을 더했기 때문에 \n", ad);
   printf("과목 1은 %d점이 됐습니다. \n", num1);
   printf("과목 2는 %d점이 됐습니다. \n", num2);

   return 0;
}

/* add 함수의 정의 */
void add(int *x1, int *x2, int a)
{
   *x1 += a;
   *x2 += a;
}
