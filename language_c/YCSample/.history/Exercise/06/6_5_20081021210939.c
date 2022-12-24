#include <stdio.h>

int main(void)
{
   int num, i;

   printf("2 이상의 정수를 입력하세요. \n");
   scanf("%d", &num);

   for(i=2; i<=num; i++){
      if(i == num){
         printf("%d은 소수입니다. \n", num);
      }
      else if(num % i == 0){
         printf("%d은 소수가 아닙니다. \n", num);
         break;
      }
   }
   return 0;
}
