#include <stdio.h>

int main(void)
{
   char str[100];
   int i;

   printf("���ڿ��� �Է��ϼ���. \n");
   scanf_s("%s", str);

   for(i=0; str[i]!='\0'; i++){
      if(str[i] == 'a'){
        str[i] = 'b';
      }
   }

   printf("%s�� ġȯ�߽��ϴ�. \n", str);

   return 0;
}
