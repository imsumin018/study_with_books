#include <stdio.h>

int main(void)
{
   int res; 

   printf("정수를 입력하세요. \n");

   scanf_s("%d", &res);

   if (res == 1){
      printf("1이 입력되었습니다. \n");
   }
   else{
      printf("1 이외의 값이 입력되었습니다. \n");
   }

   return 0;
}
