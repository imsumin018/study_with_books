#include <stdio.h>

/* length �Լ��� ���� */
int length(char *str);

int main(void)
{
   char str[100];
   int ans;

   printf("���ڿ��� �Է��ϼ���. \n");
   scanf_s("%s", str);

   ans = length(str);

   printf("���ڿ��� ���̴� %d�Դϴ�. \n", ans);

   return 0;
}

/* length �Լ��� ���� */
int length(char *str)
{
   int c = 0;

   c = 0;

   while(*str){
      c++;
      str++;
   }

   return c;
}
