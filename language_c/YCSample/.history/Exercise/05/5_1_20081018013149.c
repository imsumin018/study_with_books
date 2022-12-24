#include <stdio.h>

int main(void)
{
   int res;

   printf("정수를 입력하세요. \n");
   scanf("%d", &res);
   
   if((res % 2) == 0)
      printf("%d는 짝수입니다. \n", res);
   else
      printf("%d는 홀수입니다. \n", res);

   return 0;
}
