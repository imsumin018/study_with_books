#include <stdio.h>
#define NUM 5

int main(void)
{
   FILE *fp;
   int test[NUM] = {80,60,22,50,75};
   int i;

   if(fopen_s(&fp, "test1.bin", "wb") != 0){
      printf("������ �� �� �����ϴ�. \n");
      return 1;
   }

   for(i=0; i<NUM; i++){
      fwrite(&test[i], sizeof(int), 1, fp);
   }
   printf("���Ϸ� ����߽��ϴ�. \n");

   fclose(fp);

   return 0;
}
