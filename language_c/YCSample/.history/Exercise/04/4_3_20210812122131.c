#include <stdio.h>

int main(void)
{
   double height, width;

   printf("�ﰢ���� ���̸� �Է��ϼ���. \n");
   scanf_s("%lf", &height);

   printf("�ﰢ���� �غ��� �Է��ϼ���. \n");
   scanf_s("%lf", &width);

   printf("�ﰢ���� ������ %f�Դϴ�. \n", height * width / 2);

   return 0;
}
