#include <stdio.h>

int main(void)
{
   double height, weight;

   printf("Ű�� �Է��ϼ���. \n");
   scanf_s("%lf", &height);

   printf("�����Ը� �Է��ϼ���. \n");
   scanf_s("%lf", &weight);

   printf("Ű�� %f cm�Դϴ�. \n", height);
   printf("�����Դ� %f Kg�Դϴ�. \n", weight);

   return 0;
}
