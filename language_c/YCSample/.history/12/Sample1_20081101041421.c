#include <stdio.h>

int main(void)
{
   int i;
   double d;
   char str[100];

   printf("�������� �Է��ϼ���. \n");
   scanf("%d", &i);

   printf("�Ҽ����� �Է��ϼ���. \n");
   scanf("%lf", &d);

   printf("���ڿ��� �Է��ϼ���. \n");
   scanf("%s", str);

   printf("�Է��� �������� %d�Դϴ�. \n", i);
   printf("�Է��� �Ҽ����� %lf�Դϴ�. \n", d);
   printf("�Է��� ���ڿ��� %s�Դϴ�. \n", str);

   return 0;
}
