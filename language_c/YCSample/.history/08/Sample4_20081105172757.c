#include <stdio.h>

/* buy �Լ� ���� */
void buy(int x)
{
   printf("%d�� ��¥�� ���� �����߽��ϴ�. \n", x);
}

/* buy �Լ� ȣ�� */ 
int main(void)
{
   int num;

   printf("1��°�� ��¥�� ���� �����߽��ϱ�? \n");
   scanf("%d", &num);

   buy(num);

   printf("2��°�� ��¥�� ���� �����߽��ϱ�? \n");
   scanf("%d", &num);

   buy(num);

  return 0;
}
