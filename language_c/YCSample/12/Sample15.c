#include <stdio.h>
#define NUM 8

int main(void)
{
   FILE *fp;
   int num;
   int i;

   if(fopen_s(&fp, "test1.bin", "rb") != 0){
      printf("������ �� �� �����ϴ�. \n");
      return 1;
   }

   printf("�� ��° �����͸� �������? (1~5) \n");
   scanf_s("%d", &i);

   fseek(fp, (i-1)*sizeof(int), SEEK_SET);

   fread(&num, sizeof(int), 1, fp);

   printf("%d��° �����ʹ� %d�Դϴ�. \n", i, num);

   fclose(fp);

   return 0;
}
