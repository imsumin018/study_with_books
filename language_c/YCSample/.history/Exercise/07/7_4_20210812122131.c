#include <stdio.h>

int main(void)
{
   char str[100];
   int i, c;

   printf("���ڿ��� �Է��ϼ���. \n");
   scanf_s("%s", str);

   c = 0;

   for(i=0; str[i]!='\0'; i++){
      if(str[i] == 'a'){
        c++;
      }
   }

   printf("%s �ȿ� a�� %d�� �ֽ��ϴ�. \n", str, c);

   return 0;
}
