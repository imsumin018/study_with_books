#include <stdio.h>

/* avg �Լ��� ���� */
double avg(int t[]);

int main(void)
{

   int test[5];
   int i;
   double ans;

   printf("5���� ���� ������ �Է��ϼ���. \n"); 

   for(i=0; i<5; i++){
      scanf("%d", &test[i]);
   }

   ans = avg(test);

   printf("5���� ����� %lf���Դϴ�. \n", ans);

   return 0;
}

/* avg �Լ��� ���� */
double avg(int t[])
{
   int i;
   double sum;
   
   sum = 0.0;

   for(i=0; i<5; i++){
      sum += t[i];
   }

   return sum/5;
}