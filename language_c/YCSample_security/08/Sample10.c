#include <stdio.h>

int a = 0; 

/* func 함수 정의 */
void func(void)
{
   int c = 2;

   printf("func 함수에서는 변수 a와 c를 사용할 수 있습니다. \n");
   printf("변수 a값은 %d입니다. \n", a);
   /* printf("변수 b값은 %d입니다. \n", b); */
   printf("변수 c값은 %d입니다. \n", c);
}

/* main 함수 정의 */
int main(void)
{
   int b = 1;

   printf("main 함수에서는 변수 a와 b를 사용할 수 있습니다. \n");
   printf("변수 a값은 %d입니다. \n", a);
   printf("변수 b값은 %d입니다. \n", b);
   /* printf("변수 c값은 %d입니다. \n", c); */

   func();

   return 0;
}
