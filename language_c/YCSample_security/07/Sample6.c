#include <stdio.h>
#define SUB 2
#define NUM 5

int main(void)
{
   int test[SUB][NUM]; 
   int i;

   test[0][0] = 80;
   test[0][1] = 60;
   test[0][2] = 22;
   test[0][3] = 50;
   test[0][4] = 75;
   test[1][0] = 90;
   test[1][1] = 55;
   test[1][2] = 68;
   test[1][3] = 72;
   test[1][4] = 58;

   for(i=0; i<NUM; i++){
      printf("%d번째 사람의 국어 점수는 %d점입니다. \n", i+1, test[0][i]);
      printf("%d번째 사람의 산수 점수는 %d점입니다. \n", i+1, test[1][i]);

   }

   return 0;
}
