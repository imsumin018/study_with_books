#include <stdio.h>
#define NUM 8

int main(void)
{
   FILE *fp; 
   int test[NUM];
   int max, min;
   int i, j;

   fp = fopen_s("test3.txt", "r");

   if(fp == NULL){
      printf("파일을 열 수 없습니다. \n");
      return 1;
   }

   for(i=0; i<NUM; i++){
      fscanf_s(fp, "%d", &test[i]);
   }

   max = test[0];
   min = test[0];

   for(j=0; j<NUM; j++){
      if(max < test[j])
            max = test[j];
      if(min > test[j])
            min = test[j];
      printf("No.%-5d%d\n", j+1, test[j]);
   }

   printf("최고 점수는 %d입니다. \n", max);
   printf("최저 점수는 %d입니다. \n", min);

   fclose(fp);

   return 0;
}
