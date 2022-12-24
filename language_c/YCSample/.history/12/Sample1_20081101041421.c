#include <stdio.h>

int main(void)
{
   int i;
   double d;
   char str[100];

   printf("정수값을 입력하세요. \n");
   scanf("%d", &i);

   printf("소수값을 입력하세요. \n");
   scanf("%lf", &d);

   printf("문자열을 입력하세요. \n");
   scanf("%s", str);

   printf("입력한 정수값은 %d입니다. \n", i);
   printf("입력한 소수값은 %lf입니다. \n", d);
   printf("입력한 문자열은 %s입니다. \n", str);

   return 0;
}
