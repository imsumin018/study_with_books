#include <stdio.h>
#include "myfunc.h"

int main(void)
{
   int num1, num2, ans;

   printf("1��° ������ �Է��ϼ���(1~5). \n");
   scanf_s("%d",&num1);

   printf("2��° ������ �Է��ϼ���(1~5). \n");
   scanf_s("%d",&num2);

   ans = power(num1, num2);

   printf("%d�� %d������ %d�Դϴ�. \n", num1, num2, ans);

   return 0;
}
