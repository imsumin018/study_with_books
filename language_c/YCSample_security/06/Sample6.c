#include <stdio.h>

int main(void)
{
   int num = 1;

   while(num){
      printf("정수를 입력하세요. (0이면 종료)\n");
      scanf("%d", &num);
      printf("%d을 입력했습니다. \n", num);
   }
   printf("반복을 종료합니다. \n");

   return 0;
}
