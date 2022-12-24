#include <stdio.h>

int main(void)
{
   int test[5];
   int i, j;

   printf("5명의 점수를 입력하세요. \n");

   for(i=0; i<5; i++){
      scanf("%d", &test[i]);
   }

   for(j=0; j<5; j++){
      printf("%d번째 사람의 점수는 %d점입니다. \n", j+1, test[j]);
   }

   return 0;
}
