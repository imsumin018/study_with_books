#include <stdio.h>

int main(void)
{
   int sum = 0;
   int num = 0;

   printf("���� 1�� ������ �Է��ϼ���. \n");
   scanf_s("%d", &num);
   sum += num;

   printf("���� 2�� ������ �Է��ϼ���. \n");
   scanf_s("%d", &num);
   sum += num;

   printf("���� 3�� ������ �Է��ϼ���. \n");
   scanf_s("%d", &num);
   sum += num;

   printf("���� 4�� ������ �Է��ϼ���. \n");
   scanf_s("%d", &num);
   sum += num;

   printf("���� 5�� ������ �Է��ϼ���. \n");
   scanf_s("%d", &num);
   sum += num;

   printf("5 ������ �հ� ������ %d���Դϴ�. \n", sum);
   printf("5 ������ ��� ������ %f���Դϴ�. \n", (double)sum/5);

   return 0;
}