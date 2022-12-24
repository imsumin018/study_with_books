#include <stdio.h>

int main(void)
{
   int num;

   printf("정수를 입력하세요. \n");
   scanf("%d", &num);

   printf("부호를 반전하면 %d입니다. \n", -num);

   return 0;
}
