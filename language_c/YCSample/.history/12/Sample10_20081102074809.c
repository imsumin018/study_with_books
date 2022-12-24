#include <stdio.h>
#define NUM 5

int main(void)
{
   FILE *fp; 
   int test[NUM];
   int i, j;

   fp = fopen_s("test2.txt", "w");

   if(fp == NULL){
      printf("파일이 열리지 않습니다. \n");
      return 1;
   }
   else{
      printf("파일을 열었습니다. \n");
   }

   printf("%d명의 점수를 입력하세요. \n", NUM);
   for(i=0; i<NUM; i++){
      scanf("%d",&test[i]);
   }

   for(j=0; j<NUM; j++){
      fprintf(fp, "No.%-5d%d\n", j+1, test[j]);
   }
   printf("파일로 출력했습니다. \n");

   fclose(fp);
   printf("파일을 닫았습니다. \n");

   return 0;
}
