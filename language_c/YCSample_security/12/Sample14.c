#include <stdio.h>
#define NUM 5

int main(void)
{
   FILE *fp;
   int test[NUM];
   int i, j;

   fp = fopen("test1.bin", "rb");

   if(fp == NULL){
      printf("파일을 열 수 없습니다. \n");
      return 1;
   }

   for(i=0; i<NUM; i++){
      fread(&test[i], sizeof(int), 1, fp);
   }

   for(j=0; j<NUM; j++){
      printf("%d\n", test[j]);
   }

   fclose(fp);

   return 0;
}
