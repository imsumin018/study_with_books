#include <stdio.h>
#define NUM 5

int main(void)
{
   FILE *fp;
   int test[NUM] = {80,60,22,50,75};
   int i;

   fp = fopen("test1.bin", "wb");

   if(fp == NULL){
      printf("파일을 열 수 없습니다. \n");
      return 1;
   }

   for(i=0; i<NUM; i++){
      fwrite(&test[i], sizeof(int), 1, fp);
   }
   printf("파일로 출력했습니다. \n");

   fclose(fp);

   return 0;
}
