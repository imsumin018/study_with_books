#include <stdio.h>

int main(void)
{
   int res; 

   printf("정수를 입력하세요. \n");
   scanf_s("%d", &res);

   switch(res){
      case 1:			
         printf("1이 입력되었습니다. \n");
         break;
      case 2:				
         printf("2가 입력되었습니다. \n");
         break;
      default:				
         printf("1이나 2를 입력하세요. \n");
         break;
   }

   return 0;
}
