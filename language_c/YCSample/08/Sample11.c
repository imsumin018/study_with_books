#include <stdio.h>

int a = 0;

/* func �Լ� ���� */
void func(void)
{
   int b = 0;
   static int c = 0;

   printf("���� a�� %d, ���� b�� %d, ���� c�� %d�Դϴ�. \n", a, b, c);

   a++;
   b++;
   c++;
}

/* main �Լ� ���� */
int main(void)
{
   int i;

   for(i=0; i<5; i++)
      func();

  return 0;
}
