#include <stdio.h>

int main(void)
{
   int a, b;
   int *pA;

   a = 5;
   b = 10;

   pA = &a;

   printf("���� a�� ���� %d�Դϴ�. \n", a);
   printf("������ pA�� ���� %p�Դϴ�. \n", pA);	
   printf("*pA�� ���� %d�Դϴ�. \n", *pA);	

   pA = &b;

   printf("���� b�� ���� %d�Դϴ�. \n", b);
   printf("������ pA�� ���� %p�� ����ƽ��ϴ�. \n", pA);	
   printf("*pA�� ���� %d�Դϴ�. \n", *pA);	

   return 0;
}
