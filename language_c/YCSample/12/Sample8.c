#include <stdio.h>

int main(void)
{
   FILE *fp;

   if(fopen_s(&fp, "test1.txt", "w") != 0){
      printf("파일을 열 수 없습니다. \n");
      return 1;
   }
   else{
      printf("파일을 열었습니다. \n");
   }

   fclose(fp);
   printf("파일을 닫았습니다. \n");

   return 0;
}
