#include <stdio.h>

int main(void)
{
   char res; 

   printf("당신은 남성입니까? \n");
   printf("Y 또는 N을 입력하세요. \n");

   res = getchar();

   if (res == 'Y' || res == 'y'){
      printf("당신은 남성이군요. \n");
     }
   else if(res == 'N' || res == 'n'){
      printf("당신은 여성이군요\n");
   }
   else{
      printf("Y 또는 N을 입력하세요. \n");
   }

   return 0;
}
