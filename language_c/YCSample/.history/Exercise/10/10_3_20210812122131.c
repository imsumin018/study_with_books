#include <stdio.h>

/* compare �Լ��� ���� */
int compare(char str1[], char str2[]);

int main(void)
{
   char str1[100];
   char str2[100];
   int ans;

   printf("1��° ���ڿ��� �Է��ϼ���. \n", str1);
   scanf_s("%s", str1);

   printf("2��° ���ڿ��� �Է��ϼ���. \n", str2);
   scanf_s("%s", str2);

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
int compare(char str1[], char str2[])
{
   int i;

   for(i=0; str1[i] == str2[i]; i++){
      if(str1[i] == '\0'){
         return 1;
      }
   }
   return -1;
}
