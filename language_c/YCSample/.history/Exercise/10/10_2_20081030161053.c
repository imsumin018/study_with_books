#include <stdio.h>

/* search �Լ��� ���� */
int search(char str[]);

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
int search(char str[])
{
   int i, c;

   c = 0;

   for(i=0; str[i]!='\0'; i++){
      if(str[i] == 'a'){
        c++;
      }
   }

   return c;
}
