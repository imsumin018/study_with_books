#include <stdio.h>

/* length �Լ��� ���� */
int length(char str[]);

int main(void)
{
   char str[100];
   int ans;

   printf("���ڿ��� �Է��ϼ���. \n");
   scanf("%s", str);

   ans = length(str);

   printf("���ڿ��� ���̴� %d�Դϴ�. \n", ans);

   return 0;
}

/* length �Լ��� ���� */
int length(char str[])
{
   int i, c;

   c = 0;

   for(i=0; str[i]!='\0'; i++){
      c++;
   }

   return c;
}
