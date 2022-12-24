#include <stdio.h>

int main(void)
{
   int res; 

   printf("성적을 입력하세요. (1~5)\n");
   scanf("%d", &res);

   switch(res){
      case 1:
      case 2:
         printf("조금 더 노력하세요. \n");
         break;
      case 3:
      case 4:
         printf("잘 했습니다. \n");
         break;
      case 5:
         printf("매우 우수합니다. \n");
         break;
      default:
         printf("1~5까지의 성적을 입력하세요. \n");
         break;
   }
   
   return 0;
}
