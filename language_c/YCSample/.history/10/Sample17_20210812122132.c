#include <stdio.h>

/* �Լ� ���� */
void show0(void);
void show1(void);
void show2(void);

int main(void)
{
   void (*pM[3])(void);
   int num;

   pM[0] = show0;
   pM[1] = show1;
   pM[2] = show2;

   printf("������ ȣ���ұ��? (0:�¿��� 1:������ 2:ȭ����) \n");
   scanf_s("%d",&num);

   if(0<= num && num <= 2)
      (*pM[num])();
   
   return 0;
}

/* �Լ� ���� */
void show0(void)
{
    printf("�¿����Դϴ�. \n");
}
void show1(void)
{
    printf("�������Դϴ�. \n");
}
void show2(void)
{
    printf("ȭ�����Դϴ�. \n");
}
