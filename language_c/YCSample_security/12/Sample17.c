#include <stdio.h>
#define DEBUG

int main(void)
{
   int i;
   int sum = 0;
   
   for(i=1; i<=5; i++){

      #ifdef DEBUG
         fprintf(stderr, "���� sum�� ���� %d�� �Ǿ����ϴ�. \n", sum);
      #endif
      sum = i + sum;
   }
   printf("1~5������ �հ�� %d�Դϴ�. \n", sum);

   return 0;
}
