#include <stdio.h>
#define NUM 8

int main(void)
{
   FILE *fp;
   int num;
   int i;

   fp = fopen("test1.bin", "rb");

   if(fp == NULL){
      printf("������ �� �� �����ϴ�. \n");
      return 1;
   }

   printf("�� ��° �����͸� �������? (1~5) \n");
   scanf("%d", &i);

   fseek(fp, (i-1)*sizeof(int), SEEK_SET);

   fread(&num, sizeof(int), 1, fp);

   printf("%d��° �����ʹ� %d�Դϴ�. \n", i, num);

   fclose(fp);

   return 0;
}
