#include <stdio.h>

int a = 0; 

/* func �Լ� ���� */
void func(void)
{
   int c = 2;

   printf("func �Լ������� ���� a�� c�� ����� �� �ֽ��ϴ�. \n");
   printf("���� a���� %d�Դϴ�. \n", a);
   /* printf("���� b���� %d�Դϴ�. \n", b); */
   printf("���� c���� %d�Դϴ�. \n", c);
}

/* main �Լ� ���� */
int main(void)
{
   int b = 1;

   printf("main �Լ������� ���� a�� b�� ����� �� �ֽ��ϴ�. \n");
   printf("���� a���� %d�Դϴ�. \n", a);
   printf("���� b���� %d�Դϴ�. \n", b);
   /* printf("���� c���� %d�Դϴ�. \n", c); */

   func();

   return 0;
}
