#include <stdio.h>

int main(void)
{
   int res; 

   printf("������ �Է��ϼ���. \n");

   scanf_s("%d", &res);

   if (res == 1){
      printf("1�� �ԷµǾ����ϴ�. \n");
   }
   else{
      printf("1 �̿��� ���� �ԷµǾ����ϴ�. \n");
   }

   return 0;
}
