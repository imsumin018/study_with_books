#include <stdio.h>

/* ����ü �� struct Car�� ���� */
struct Car{
   int num;
   double gas;
};

int main(void)
{
   struct Car car1;

   printf("����� �Է��ϼ���. \n");
   scanf("%d", &car1.num);

   printf("���ᷮ�� �Է��ϼ���. \n");
   scanf("%lf", &car1.gas);

   printf("�ڵ��� ��ȣ�� %d : ���ᷮ�� %f�Դϴ�. \n", car1.num, car1.gas);

   return 0;
}
