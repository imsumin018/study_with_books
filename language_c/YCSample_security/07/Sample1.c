#include <stdio.h>

int main(void)
{
   int test[5];
   int i;
  
   test[0] = 80;
   test[1] = 60;
   test[2] = 22;
   test[3] = 50;
   test[4] = 75;

   for(i=0; i<5; i++){
      printf("%d번째 사람의 점수는 %d점입니다. \n", i+1, test[i]);
   }

   return 0;
}
