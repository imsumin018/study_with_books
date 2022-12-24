#include <stdio.h>
#define NUM 8

int main(void)
{
   FILE *fp;
   int num;
   int i;

   fp = fopen("test1.bin", "rb");

   if(fp == NULL){
      printf("파일을 열 수 없습니다. \n");
      return 1;
   }

   printf("몇 번째 데이터를 읽을까요? (1~5) \n");
   scanf("%d", &i);

   fseek(fp, (i-1)*sizeof(int), SEEK_SET);

   fread(&num, sizeof(int), 1, fp);

   printf("%d번째 데이터는 %d입니다. \n", i, num);

   fclose(fp);

   return 0;
}
