#include <stdio.h>

/* search �Լ��� ���� */
int search(char *str);

int main(void)
{
   char str[100];
   int ans;

   printf("���ڿ��� �Է��ϼ���. \n");
   scanf("%s", str);

   ans = search(str);

   printf("%s �ȿ� a�� %d�� �ֽ��ϴ�. \n", str, ans);

   return 0;
}

/* search �Լ��� ���� */
int search(char *str)
{
   int c = 0;

   while(*str){
      if(*str == 'a'){
        c++;
      }
      str++;
   }

   return c;
}
