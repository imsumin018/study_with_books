#include <stdio.h>

/* square �Լ� ���� */
int square(int x);

int main(void)
{
   int num, ans;

   printf("������ �Է��ϼ���. \n");
   scanf("%d", &num);

   ans = square(num);

   printf("%d�� 2������ %d�Դϴ�. \n", num, ans);

   return 0;
}

/* square �Լ� ���� */
int square(int x)
{
   return x * x;
}
