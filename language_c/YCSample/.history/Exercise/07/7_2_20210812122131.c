#include <stdio.h>
#define NUM 5

int main(void)
{
   int test[NUM];
   int i, j;
   int num;

   num = 0;

   printf("���� ������ �Է��ϼ���. \n");
   for(i=0; i<NUM; i++){
      scanf_s("%d", &test[i]);

      if(test[i] >= 70){
         num++;
      }
   }

   for(j=0; j<NUM; j++){
      printf("%d��° ����� ������ %d���Դϴ�. \n", j+1, test[j]);
   }

   printf("70�� �̻��� �л��� %d���Դϴ�. \n", num);

   return 0;
}
