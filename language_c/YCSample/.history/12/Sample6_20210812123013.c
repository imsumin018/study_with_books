#include <stdio.h>

int main(void)
{
   char str[100];

   printf("���ڿ��� �Է��ϼ���. \n");
   gets_s(str, 100);

   printf("�Է��� ���ڿ��� %s�Դϴ�. \n", str);

   return 0;
}
