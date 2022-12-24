#include <stdio.h>
#define NUM 5

int main(void)
{
   int test[NUM];
   int tmp;
   int i, j, s, t;

   printf("%d명의 점수를 입력하세요. \n", NUM);
   for(i=0; i<NUM; i++){
      scanf_s("%d", &test[i]);
   }

   for(s=0; s<NUM-1; s++){
      for(t=s+1; t<NUM; t++){
         if(test[t] > test[s]){
            tmp = test[t];
            test[t] = test[s];
            test[s] = tmp;
            
         }
      }
   }

   for(j=0; j<NUM; j++){
      printf("%d등 점수는 %d점입니다. \n", j+1, test[j]);
   }

   return 0;
}
