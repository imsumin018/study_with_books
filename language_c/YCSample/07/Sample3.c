#include <stdio.h>

int main(void)
{
   int test[5] = {80,60,22,50,75};
   int i;

   for(i=0; i<5; i++){
      printf("%d번째 사람의 점수는 %d점입니다. \n", i+1, test[i]);
   }

   return 0;
}
