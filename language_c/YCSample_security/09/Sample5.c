#include <stdio.h>

int main(void)
{
   int a;
   int *pA;

   a = 5;
   pA = &a;

   printf("���� a�� ���� %d�Դϴ�. \n", a);

   *pA = 50;

   printf("*pA�� 50�� �����߽��ϴ�. \n");
   printf("���� a�� ���� %d�Դϴ�. \n", a);

   return 0;
}
