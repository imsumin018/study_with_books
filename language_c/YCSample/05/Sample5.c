#include <stdio.h>

int main(void)
{
   int res; 

   printf("������ �Է��ϼ���. \n");
   scanf_s("%d", &res);

   switch(res){
      case 1:			
         printf("1�� �ԷµǾ����ϴ�. \n");
         break;
      case 2:				
         printf("2�� �ԷµǾ����ϴ�. \n");
         break;
      default:				
         printf("1�̳� 2�� �Է��ϼ���. \n");
         break;
   }

   return 0;
}
