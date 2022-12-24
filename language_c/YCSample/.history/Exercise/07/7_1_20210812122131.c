#include <stdio.h>
#define NUM 5

int main(void)
{
   int test[NUM];
   int max;
   int i, j;

   max = 0;

   printf("시험 점수를 입력하세요. \n");
   for(i=0; i<NUM; i++){
      scanf_s("%d", &test[i]);

      if(max < test[i])
         max = test[i];
   }

   for(j=0; j<NUM; j++){
      printf("%d번째 사람의 점수는 %d점입니다. \n", j+1, test[j]);
   }

   printf("최고 점수는 %d점입니다. \n", max);

   return 0;
}
