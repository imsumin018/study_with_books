#include <stdio.h>

/* ����ü �� struct Car�� ���� */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   Car car1 = {1234, 25.5};
   Car car2 = {4567, 52.2};

   printf("car1�� �ڵ��� ��ȣ�� %d : ���ᷮ�� %f�Դϴ�. \n", car1.num, car1.gas);
   printf("car2�� �ڵ��� ��ȣ�� %d : ���ᷮ�� %f�Դϴ�. \n", car2.num, car2.gas);

   car2 = car1;

   printf("car1�� car2�� �����߽��ϴ�. \n");

   printf("car2�� ��ȣ�� %d : ���ᷮ�� %lf�� �Ǿ����ϴ�. \n", car2.num, car2.gas);

   return 0;
}
