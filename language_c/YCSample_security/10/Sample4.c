#include <stdio.h>

int main(void)
{
   int test[5] = {80,60,55,22,75};

   printf("test[0]�� ���� %d�Դϴ�. \n", test[0]);
   printf("test[0]�� ��巹���� %p�Դϴ�. \n", &test[0]);
   printf("test�� ���� %p�Դϴ�. \n", test);
   printf("test+1�� ���� %p�Դϴ�. \n", test+1);
   printf("*(test+1)�� ���� %d�Դϴ�. \n", *(test+1));

   return 0;
}
