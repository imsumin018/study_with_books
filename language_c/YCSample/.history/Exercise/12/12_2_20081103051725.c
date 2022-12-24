#include <stdio.h>

int main(void)
{
   FILE *fp;
   int i, j;

   fp = fopen("result.txt", "w");

   if(fp == NULL){
      printf("파일을 열 수 없습니다. \n");
      return 1;
   }
   else{
      printf("파일을 열었습니다. \n");
   }

   for (i=1; i<=5; i++){
      for(j=1; j<=5; j++){
         fprintf(fp, "%3d", i*j); 
      }
      fprintf(fp, "\n");
   }

   fclose(fp);
   printf("파일을 닫았습니다. \n");

   return 0;
}
