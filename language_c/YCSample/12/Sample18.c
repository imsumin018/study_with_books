#include <stdio.h>
int main(void)
{
   int i;
   int sum = 0;

   fprintf(stderr, "�ҽ� ���� �̸� : %s\n", __FILE__);
   fprintf(stderr, "�ۼ����� : %s\n", __DATE__);
   fprintf(stderr, "�ۼ��ð� : %s\n", __TIME__);
   for(i=1; i<=5; i++){
      sum = i + sum;
   }
   printf("1~5������ �հ�� %d�Դϴ�. \n", sum);

   return 0;
}
