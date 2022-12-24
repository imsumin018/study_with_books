#include <stdio.h>
#define NUM 20

int main(void)
{
   FILE *fp; 
   char str1[NUM];
   char str2[NUM];

   fp = fopen("test1.txt", "r");

   if(fp == NULL){
      printf("파일을 열 수 없습니다. \n");
      return 1;
   }
   else{
      printf("파일을 열었습니다.\n");
   }

   fgets(str1, NUM-1, fp);
   fgets(str2, NUM-1, fp);

   printf("파일로 출력된 문자열은 \n");
   printf("%s", str1);
   printf("%s", str2);

   fclose(fp);
   printf("파일을 닫았습니다. \n");

   return 0;
}
