#include <stdio.h>

int main(void)
{
   char res;

   printf("A~C������ ������ �Է��ϼ���. \n");
   res = getchar();
   
   if(res == 'A' || res == 'B' || res == 'C'){
      printf("�����Դϴ�. \n");
   }
   else{
      printf("Ʋ�Ƚ��ϴ�. \n");
   }
   return 0;
}
