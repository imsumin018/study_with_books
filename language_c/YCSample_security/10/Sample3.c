#include <stdio.h>

int main(void)
{
   int test[5] = {80,60,55,22,75};

   printf("test[0]�� ���� %d�Դϴ�. \n", test[0]);
   printf("test[0]�� ��巹���� %p�Դϴ�. \n", &test[0]);
   printf("test�� ���� %p�Դϴ�. \n", test);
   printf("�� *test�� ���� %d�Դϴ�. \n", *test);

   return 0;
}
