#include <stdio.h>
#define MAX(x, y) (x > y ? x : y)

int main(void)
{
   int num1, num2, ans;

   printf("1��° ������ �Է��ϼ���. \n");
   scanf_s("%d",&num1);

   printf("2��° ������ �Է��ϼ���. \n");
   scanf_s("%d",&num2);

   ans = MAX(num1, num2);
   
   printf("�ִ밪�� %d�Դϴ�. \n", ans);

   return 0;
}
