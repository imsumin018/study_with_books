#include <stdio.h>

int main(void)
{
   int num, sum;
   int i;

   num = 0;
   sum = 0;

   printf("������� �հ踦 ����ұ��? \n");
   scanf_s("%d", &num);

   for(i=1; i<=num; i++){
      sum += i; 
   }

   printf("1���� %d������ �հ�� %d�Դϴ�. \n", num, sum);

   return 0;
}
