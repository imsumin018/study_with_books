#include <stdio.h>

int main(void)
{
   int res; 

   printf("������ �Է��ϼ���. \n");
   scanf("%d", &res);

   if (res == 1){
      printf("1�� �ԷµǾ����ϴ�. \n");
   }
   else if(res == 2){
      printf("2�� �ԷµǾ����ϴ�. \n");
   }
   else{
      printf("1�̳� 2�� �Է��ϼ���. \n");
   }

   return 0;
}
