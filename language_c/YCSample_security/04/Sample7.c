#include <stdio.h>

int main(void)
{
   int a = 1;
   int b = 0;

   printf("short int�� ũ��� %d����Ʈ�Դϴ�. \n", sizeof(short int));
   printf("int�� ũ��� %d����Ʈ�Դϴ�. \n", sizeof(int));
   printf("long int�� ũ��� %d����Ʈ�Դϴ�. \n", sizeof(long int));
   printf("float�� ũ��� %d����Ʈ�Դϴ�. \n", sizeof(float));
   printf("double�� ũ��� %d����Ʈ�Դϴ�. \n", sizeof(double));
   printf("long double�� ũ��� %d����Ʈ�Դϴ�. \n", sizeof(long double));
   printf("���� a�� ũ��� %d����Ʈ�Դϴ�. \n", sizeof(a));
   printf("�� a+b�� ũ��� %d����Ʈ�Դϴ�. \n", sizeof(a+b));

   return 0;
}
