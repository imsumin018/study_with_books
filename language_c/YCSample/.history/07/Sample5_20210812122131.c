#include <stdio.h>
#define NUM 5

int main(void)
{
   int test[NUM];
   int tmp;
   int i, j, s, t;

   printf("%d���� ������ �Է��ϼ���. \n", NUM);
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
      printf("%d�� ������ %d���Դϴ�. \n", j+1, test[j]);
   }

   return 0;
}
