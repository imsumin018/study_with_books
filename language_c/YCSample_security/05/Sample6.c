#include <stdio.h>

int main(void)
{
   char res; 

   printf("����� �����Դϱ�? \n");
   printf("Y �Ǵ� N�� �Է��ϼ���. \n");

   res = getchar();

   if (res == 'Y' || res == 'y'){
      printf("����� �����̱���. \n");
     }
   else if(res == 'N' || res == 'n'){
      printf("����� �����̱���\n");
   }
   else{
      printf("Y �Ǵ� N�� �Է��ϼ���. \n");
   }

   return 0;
}
