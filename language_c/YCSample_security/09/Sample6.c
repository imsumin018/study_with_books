#include <stdio.h>

/* �߸��� swap �Լ��� ���� */
void swap(int x, int y);

int main(void)
{
   int num1 = 5;
   int num2 = 10;

   printf("���� num1�� ���� %d�Դϴ�. \n", num1);
   printf("���� num2�� ���� %d�Դϴ�. \n", num2);
   printf("���� num1�� num2�� ���� ��ȯ�մϴ�. \n");

   swap(num1, num2);

   printf("���� num1�� ���� %d�Դϴ�. \n", num1);
   printf("���� num2�� ���� %d�Դϴ�. \n", num2);

   return 0;
}

/* �߸��� swap �Լ��� ���� */
void swap(int x, int y)
{
   int tmp;

   tmp = x;
   x = y;
   y = tmp;
}
