#include <stdio.h>

int main(void)
{
   FILE *fp;

   if(fopen_s(&fp, "test1.txt", "w") != 0){
      printf("������ �� �� �����ϴ�. \n");
      return 1;
   }
   else{
      printf("������ �������ϴ�. \n");
   }

   fclose(fp);
   printf("������ �ݾҽ��ϴ�. \n");

   return 0;
}
