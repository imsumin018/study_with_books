#include <stdio.h>

int main(void)
{
   int num1, num2;

   printf("�� ���� ������ �Է��ϼ���. \n");
   scanf_s("%d", &num1);
   scanf_s("%d", &num2);

   if (num1 < num2) {
      printf("%d���� %d�� ū ���Դϴ�. \n", num1, num2);
   }
   else if(num1 > num2) {
      printf("%d���� %d�� ū ���Դϴ�. \n", num2, num1);
   }
   else{
      printf("�� ���� ���� ���� ���Դϴ�. \n");
   }

   return 0;
}
