#include <stdio.h>
#define SQUARE(x) (x * x)

int main(void)
{
   int num, ans;

   printf("������ �Է��ϼ���. \n");
   scanf("%d", &num);

   ans = SQUARE(num);

   printf("%d�� 2������ %d�Դϴ�. \n", num, ans);

   return 0;
}
