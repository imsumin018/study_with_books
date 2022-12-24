#include <stdio.h>

int main(void)
{
   char res;

   printf("A~C까지의 정수를 입력하세요. \n");
   res = getchar();
   
   if(res == 'A' || res == 'B' || res == 'C'){
      printf("정답입니다. \n");
   }
   else{
      printf("틀렸습니다. \n");
   }
   return 0;
}
