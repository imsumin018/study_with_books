#include <stdio.h>

int main(void)
{
   FILE *fp;
   int i, j;

   if(fopen_s(&fp, "result.txt", "r") != 0){
      printf("������ �� �� �����ϴ�. \n");
      return 1;
   }
   else{
      printf("������ �������ϴ�. \n");
   }

   for (i=1; i<=5; i++){
      for(j=1; j<=5; j++){
         fprintf(fp, "%3d", i*j); 
      }
      fprintf(fp, "\n");
   }

   fclose(fp);
   printf("������ �ݾҽ��ϴ�. \n");

   return 0;
}
