#include<stdio.h>

/* ����ü �� struct Car�� ���� */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   printf("int���� ũ��� %d����Ʈ�Դϴ�. \n", sizeof(int));
   printf("double���� ũ��� %d����Ʈ�Դϴ�. \n", sizeof(double));
   printf("����ü struct Car���� ũ��� %d����Ʈ�Դϴ�. \n", sizeof(Car));
   printf("����ü struct Car�� �������� ũ��� %d����Ʈ�Դϴ�. \n", sizeof(Car *));

   return 0;
}
