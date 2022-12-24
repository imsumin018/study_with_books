#include <stdio.h>

int main(void)
{
   int res;

   printf("0부터 10까지의 정수를 입력하세요. \n");
   scanf_s("%d", &res);
   
   if(res >= 0 && res <= 10){
      printf("정답입니다. \n");
   }
   else{
      printf("틀렸습니다. \n");
   }
   return 0;
}
