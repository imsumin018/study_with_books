#include <stdio.h>

/* sum �Լ� ���� */
int sum(int x, int y)
{
   int z;
   
   z= x+y;

   return z;
}

int main(void)
{
   int num1, num2, ans;

   printf("1��° ������ �Է��ϼ���. \n");
   scanf_s("%d",&num1);

   printf("2��° ������ �Է��ϼ���. \n");
   scanf_s("%d",&num2);

   ans = sum(num1, num2);
   
   printf("�հ�� %d�Դϴ�. \n", ans);

   return 0;
}
