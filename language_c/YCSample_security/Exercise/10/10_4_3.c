#include <stdio.h>

/* compare �Լ��� ���� */
int compare(char *str1, char *str2);

int main(void)
{
   char str1[100];
   char str2[100];
   int ans;

   printf("1��° ���ڿ��� �Է��ϼ���. \n", str1);
   scanf("%s", str1);

   printf("2��° ���ڿ��� �Է��ϼ���. \n", str2);
   scanf("%s", str2);

   ans = compare(str1, str2);

   if(ans == 1){
      printf("2���� ���ڿ��� �����ϴ�. \n");
   }
   else
   {
      printf("2���� ���ڿ��� �ٸ��ϴ�. \n");
   }
   return 0;
}

/* compare �Լ��� ���� */
int compare(char *str1, char *str2)
{
   while(*str1 == *str2){
      if(*str1 == '\0'){
         return 1;
      }
      str1++;
      str2++;
   }
   return -1;
}
