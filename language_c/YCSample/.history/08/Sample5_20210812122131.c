#include <stdio.h>

/* buy �Լ� ���� */
void buy(int x, int y)
{
   printf("%d������ %d�� ��¥�� ���� �����߽��ϴ�. \n", x, y);

}

/* buy �Լ� ȣ�� */ 
int main(void)
{
   int num1, num2;

   printf("��¥�� ���� �����߽��ϱ�? \n");
   scanf_s("%d", &num1);

   printf("��¥�� ���� �����߽��ϱ�? \n");
   scanf_s("%d", &num2);

   buy(num1, num2);

   return 0;
}
