#include <stdio.h>

/* power �Լ� ���� */
int power(int x, int y);

int main(void)
{
   int num1, num2, ans;

   printf("1��° ������ �Է��ϼ���(1~5). \n");
   scanf("%d",&num1);

   printf("2��° ������ �Է��ϼ���(1~5). \n");
   scanf("%d",&num2);

   ans = power(num1, num2);

   printf("%d�� %d������ %d�Դϴ�. \n", num1, num2, ans);

   return 0;
}

/* power �Լ� ���� */
int power(int x, int y)
{
   int i;
   int pow = 1; 

   for(i=1; i<=y; i++){
      pow = pow * x;
   }
   return pow;
}
