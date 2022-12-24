#include <stdio.h>

int a = 0;

/* func 함수 정의 */
void func(void)
{
   int b = 0;
   static int c = 0;

   printf("변수 a는 %d, 변수 b는 %d, 변수 c는 %d입니다. \n", a, b, c);

   a++;
   b++;
   c++;
}

/* main 함수 정의 */
int main(void)
{
   int i;

   for(i=0; i<5; i++)
      func();

  return 0;
}
