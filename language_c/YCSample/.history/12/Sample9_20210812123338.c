#include <stdio.h>

int main(void)
{
   FILE *fp; 

   if(fopen_s(&fp, "test1.txt", "w") != 0){
      printf("������ ������ �ʽ��ϴ�. \n");
      return 1;
   }
   else{
      printf("������ �������ϴ�. \n");
   }

   fputs("Hello!\n", fp);
   fputs("Goodbye!\n", fp);
   printf("���Ϸ� ����߽��ϴ�. \n");

   fclose(fp);
   printf("������ �ݾҽ��ϴ�. \n");

   return 0;
}
