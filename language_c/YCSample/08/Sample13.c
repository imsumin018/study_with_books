#include <stdio.h>
#include "myfunc.h"

int main(void)
{
   int num1, num2, ans;

   printf("1��° ������ �Է��ϼ���. \n");
   scanf_s("%d",&num1);

   printf("2��° ������ �Է��ϼ���. \n");
   scanf_s("%d",&num2);

   ans = max(num1, num2);
   
   printf("�ִ밪�� %d�Դϴ�. \n", ans);

   return 0;
}
