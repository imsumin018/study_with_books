#include <stdio.h>

/* add �Լ��� ���� */
void add(int *x1, int *x2, int a);

int main(void)
{
   int num1 = 0;
   int num2 = 0;
   int ad = 0;

   printf("�� ������ ������ �Է��ϼ���. \n");
   scanf_s("%d", &num1);
   scanf_s("%d", &num2);

   printf("���� ������ �Է��ϼ���. \n");
   scanf_s("%d", &ad);

   add(&num1, &num2, ad);

   printf("%d���� ���߱� ������ \n", ad);
   printf("���� 1�� %d���� �ƽ��ϴ�. \n", num1);
   printf("���� 2�� %d���� �ƽ��ϴ�. \n", num2);

   return 0;
}

/* add �Լ��� ���� */
void add(int *x1, int *x2, int a)
{
   *x1 += a;
   *x2 += a;
}
