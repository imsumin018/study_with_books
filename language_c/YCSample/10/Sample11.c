#include <stdio.h>
#include <string.h>

int main(void)
{
   char str[100];

   printf("���ڿ�(��������)�� �Է��ϼ���. \n");

   scanf_s("%s", str, 100);

   printf("���ڿ� ���̴� %d�Դϴ�. \n", strlen(str));

   return 0;
}
