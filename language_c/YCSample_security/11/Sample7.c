#include<stdio.h>

/* ����ü �� struct Car1�� ���� */
typedef struct Car1{
   int num;
   double gas;
   unsigned int tire : 3;
   unsigned int roof : 1;
   unsigned int color : 4;
}Car1;

/* ����ü �� struct Car2�� ���� */
typedef struct Car2{
   int num;
   double gas;
   unsigned int tire;
   unsigned int roof;
   unsigned int color;
}Car2;

int main(void)
{
   printf("��Ʈ �ʵ带 ����� ����ü�� ũ��� %d����Ʈ�Դϴ�. \n", sizeof(Car1));
   printf("��Ʈ �ʵ带 ������� �ʴ� ����ü�� ũ��� %d����Ʈ�Դϴ�. \n", sizeof(Car2));

   return 0;
}
