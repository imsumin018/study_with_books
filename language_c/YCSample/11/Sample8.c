#include <stdio.h>

/* ����ü �� struct Car�� ���� */
typedef struct Car{
   int num;
   double gas;
}Car;

/* show �Լ��� ���� */
void show(Car c);

int main(void)
{
   Car car1 = {0, 0.0};

   printf("��ȣ�� �Է��ϼ���. \n");
   scanf_s("%d", &car1.num);

   printf("���ᷮ�� �Է��ϼ���. \n");
   scanf_s("%lf", &car1.gas);

   show(car1);

   return 0;
}

/* show �Լ��� ���� */
void show(Car c)
{
   printf("�ڵ��� ��ȣ�� %d : ���ᷮ�� %f�Դϴ�. \n", c.num, c.gas);
}
