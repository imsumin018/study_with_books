#include <stdio.h>

int main(int argc, char *argv[])
{
   FILE *fp;
   int ch;

   if(argc != 2){
      printf("�Ű������� ���� �ٸ��ϴ�. \n");
      return 1;
   }

   fp = fopen_s(argv[1], "r");

   if(fopen_s(&fp, argv[1], "r") != 0){
      printf("������ �� �� �����ϴ�. \n");
      return 1;
   }

   while((ch = fgetc(fp)) != EOF){
      putchar(ch);
   }

   fclose(fp);

   return 0;
}
