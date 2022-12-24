#include <stdio.h>

int main(int argc, char* argv[])
{
   FILE *fp;
   int i, j;

   if(argc != 2){
      printf("매개 변수의 수가 다릅니다. \n");
      return 1;
   }

   if(fopen_s(&fp, argv[1], "w") != 0){
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
