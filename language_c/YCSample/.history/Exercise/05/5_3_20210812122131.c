#include <stdio.h>

int main(void)
{
   int res;

   printf("0���� 10������ ������ �Է��ϼ���. \n");
   scanf_s("%d", &res);
   
   if(res >= 0 && res <= 10){
      printf("�����Դϴ�. \n");
   }
   else{
      printf("Ʋ�Ƚ��ϴ�. \n");
   }
   return 0;
}
