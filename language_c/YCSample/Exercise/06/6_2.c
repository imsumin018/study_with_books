#include <stdio.h>

int main(void)
{
   int num = 0;
   int sum = 0;

   do{
      printf("���� ������ �Է��ϼ���. (0�̸� ����)\n");
      scanf_s("%d", &num);
      sum += num;
   }while(num);

   printf("���� ������ �հ�� %d�Դϴ�. \n", sum);

   return 0;
}
