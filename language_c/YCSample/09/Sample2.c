#include <stdio.h>

int main(void)
{
   int a;
   int *pA;

   a = 5;
   pA = &a;

   printf("���� a�� ���� %d�Դϴ�. \n", a);
   printf("���� a�� ��巹���� %p�Դϴ�. \n", &a);
   printf("������ pA�� ���� %p�Դϴ�.\n", pA);	

   return 0;
}
