#include <stdio.h>

int main(void)
{
   int i = 1;
   
   while(i <= 5){
      printf("%d번째 반복입니다. \n", i);
      i++;
   }
   printf("반복을 종료했습니다. \n");

   return 0;
}
