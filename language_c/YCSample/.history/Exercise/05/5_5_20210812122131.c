#include <stdio.h>

int main(void)
{
   int res;

   printf("성적을 입력하세요.  \n");
   scanf_s("%d", &res);
   
   printf("성적은 %d입니다. \n", res);
   
   switch(res){
   case 1:
      printf("노력이 필요합니다. \n");
      break;
   case 2:
      printf("조금 더 노력하세요. \n");
      break;
   case 3:
      printf("잘 했습니다. \n");
      break;
   case 4:
      printf("매우 잘 했습니다. \n");
      break;
   case 5:
      printf("매우 우수합니다. \n");
      break;
   }

   return 0;
}
