#include <stdio.h>

int main(void)
{
   char str[100];
   int i, c;

   c = 0;

   printf("���ڿ��� �Է��ϼ���. \n");
   scanf_s("%s", str);

   for(i=0; str[i]!='\0'; i++){
     c++;
   }

   printf("���ڿ� ũ��� %d�Դϴ�. \n", c);

   return 0;
}
