#include <stdio.h>

int main(void)
{
   int num1 = 2;
   int num2 = 3;
   int sum = num1+num2;

   printf("���� num1�� ���� %d�Դϴ�. \n", num1);
   printf("���� num2�� ���� %d�Դϴ�. \n", num2);
   printf("num1+num2�� ���� %d�Դϴ�. \n", sum);

   num1 = num1+1;

   printf("���� num1�� ���� 1�� ���ϸ� %d�Դϴ�. \n", num1);

   return 0;
}
