#include <stdio.h>

int main(void)
{
   int sum = 0;
   int num = 0;

   printf("1��° ������ �Է��ϼ���. \n");
   scanf("%d", &num);
   sum += num;

   printf("2��° ������ �Է��ϼ���. \n");
   scanf("%d", &num);
   sum += num;

   printf("3��° ������ �Է��ϼ���. \n");
   scanf("%d", &num);
   sum += num;

   printf("3���� ���� �հ�� %d�Դϴ�. \n", sum);

   return 0;
}
