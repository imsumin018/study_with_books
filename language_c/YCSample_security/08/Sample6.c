#include <stdio.h>

/* buy �Լ� ���� */
int buy(int x, int y)
{
   int z;
   
   printf("%d������ %d�� ��¥�� ���� �����߽��ϴ�. \n", x, y);

   z= x+y;

   return z;
}

/* buy �Լ� ȣ�� */ 
int main(void)
{
   int num1, num2, sum;

   printf("��¥�� ���� �����߽��ϱ�? \n");
   scanf("%d",&num1);

   printf("��¥�� ���� �����߽��ϱ�? \n");
   scanf("%d",&num2);

   sum = buy(num1, num2);
   
   printf("�հ� %d�����Դϴ�. \n", sum);

   return 0;
}
