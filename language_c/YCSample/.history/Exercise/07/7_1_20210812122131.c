#include <stdio.h>
#define NUM 5

int main(void)
{
   int test[NUM];
   int max;
   int i, j;

   max = 0;

   printf("���� ������ �Է��ϼ���. \n");
   for(i=0; i<NUM; i++){
      scanf_s("%d", &test[i]);

      if(max < test[i])
         max = test[i];
   }

   for(j=0; j<NUM; j++){
      printf("%d��° ����� ������ %d���Դϴ�. \n", j+1, test[j]);
   }

   printf("�ְ� ������ %d���Դϴ�. \n", max);

   return 0;
}
