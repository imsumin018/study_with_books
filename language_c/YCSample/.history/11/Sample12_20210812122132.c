#include <stdio.h>

/* ����ü �� union Year�� ���� */
typedef union Year{
   int ad;
   int old; 
}Year;

int main(void)
{
   Year myyear;
   int a, o;

   printf("������ �Է��ϼ���. \n");
   scanf_s("%d", &a);

   myyear.ad  = a;

   printf("���ش� %d���Դϴ�. \n", myyear.ad);
   printf("���̴� %d���Դϴ�. \n", myyear.old);

   printf("���̸� �Է��ϼ���. \n");
   scanf_s("%d",&o);

   myyear.old = o;

   printf("���̴� %d���Դϴ�. \n", myyear.old);
   printf("������ %d���Դϴ�. \n", myyear.ad);

   return 0;
}