#include <stdio.h>

/* ����ü �� struct Car�� ���� */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   Car car1 = {1234, 25.5};

   printf("�ڵ��� ��ȣ�� %d : ���ᷮ�� %f�Դϴ�. \n", car1.num, car1.gas);

   return 0;
}
