#include <stdio.h>

/* max �Լ��� ���� */
int max(int x, int y);

int main(void)
{
   int num1, num2, ans;
   int (*pM)(int x, int y);
   pM = max;
   printf("1��° ��ġ�� �Է��ϼ���. \n");
   scanf("%d",&num1);

   printf("2��° ��ġ�� �Է��ϼ���. \n");
   scanf("%d",&num2);

   ans = (*pM)(num1, num2);
   
   printf("�ִ밪�� %d�Դϴ�. \n", ans);

   return 0;
}

/* max �Լ��� ���� */
int max(int x, int y)
{
   if (x > y)
      return x;
   else 
      return y;
}
