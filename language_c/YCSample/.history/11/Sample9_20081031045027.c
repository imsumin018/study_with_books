#include <stdio.h>

/* ����ü �� struct Car�� ���� */
typedef struct Car{
   int num;
   double gas;
}Car;

/* show �Լ��� ���� */
void show(Car *pC);

int main(void)
{
   Car car1 = {1234, 20.5};

   printf("��ȣ�� �Է��ϼ���. \n");
   scanf("%d", &car1.num);

   printf("���ᷮ�� �Է��ϼ���. \n");
   scanf("%lf", &car1.gas);

   show(&car1);

   return 0;
}

/* show �Լ��� ���� */
void show(Car *pC)
{
   printf("�ڵ��� ��ȣ�� %d : ���ᷮ�� %f�Դϴ�. \n", pC->num, pC->gas);
}
