#include <stdio.h>

/* min �Լ� ���� */
int min(int x, int y);

int main(void)
{
   int num1, num2, ans;

   printf("1��° ������ �Է��ϼ���. \n");
   scanf("%d",&num1);

   printf("2��° ������ �Է��ϼ���. \n");
   scanf("%d",&num2);

   ans = min(num1, num2);
   
   printf("�ּҰ��� %d�Դϴ�. \n", ans);

   return 0;
}

/* min �Լ� ���� */
int min(int x, int y)
{
   if (x < y)
      return x;
   else 
      return y;
}
