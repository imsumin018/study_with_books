#include <stdio.h>

int main(int argc, char* argv[])
{
   FILE *fp;
   int i, j;

   if(argc != 2){
      printf("�Ű� ������ ���� �ٸ��ϴ�. \n");
      return 1;
   }

   fp = fopen(argv[1], "w");

   if(fp == NULL){
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
