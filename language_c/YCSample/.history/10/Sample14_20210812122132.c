#include <stdio.h>
#include <string.h>

int main(void)
{
   char str1[100];
   char str2[100];

   printf("1��° ���ڿ��� �Է��ϼ���. \n");
   scanf_s("%s", str1);

   printf("2��° ���ڿ��� �Է��ϼ���. \n");
   scanf_s("%s", str2);

   if(strcmp(str1, str2) == 0){
      printf("2���� ���ڿ��� �����ϴ�. \n");
   }
   else
   {
      printf("2���� ���ڿ��� �ٸ��ϴ�. \n");
   }
   return 0;
}
