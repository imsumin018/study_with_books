#include <stdio.h>
#include <ctype.h>

int main(void)
{
   char str[100];
   int i, j;

   printf("���ڿ��� �Է��ϼ���. \n");
   scanf_s("%s", str, 100);

   for(i=0; str[i]!='\0'; i++){
      str[i] = toupper(str[i]);
   }
   printf("�빮�ڷ� ��ȯ�ϸ� %s�Դϴ�. \n", str);

   for(j=0; str[j]!='\0'; j++){
      str[j] = tolower(str[j]);
   }

   printf("�ҹ��ڷ� ��ȯ�ϸ� %s�Դϴ�. \n", str);

   return 0;
}
