#include <stdio.h>

/* swap �Լ��� ���� */
void swap(int *pX, int *pY);

int main(void)
{
   int num1 = 5;
   int num2 = 10;

   printf("���� num1�� ���� %d�Դϴ�. \n", num1);
   printf("���� num2�� ���� %d�Դϴ�. \n", num2);
   printf("���� num1�� num2�� ���� ��ȯ�մϴ�. \n", num1);

   swap(&num1, &num2);

   printf("���� num1�� ���� %d�Դϴ�. \n", num1);
   printf("���� num2�� ���� %d�Դϴ�. \n", num2);

   return 0;
}

/* swap �Լ��� ���� */
void swap(int *pX, int *pY)
{
   int tmp;

   tmp = *pX;
   *pX = *pY;
   *pY = tmp;
}
