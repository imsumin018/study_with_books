#include <stdio.h>
#define NUM 20

int main(void)
{
   FILE *fp; 
   char str1[NUM];
   char str2[NUM];

   fp = fopen("test1.txt", "r");

   if(fp == NULL){
      printf("������ �� �� �����ϴ�. \n");
      return 1;
   }
   else{
      printf("������ �������ϴ�.\n");
   }

   fgets(str1, NUM-1, fp);
   fgets(str2, NUM-1, fp);

   printf("���Ϸ� ��µ� ���ڿ��� \n");
   printf("%s", str1);
   printf("%s", str2);

   fclose(fp);
   printf("������ �ݾҽ��ϴ�. \n");

   return 0;
}
