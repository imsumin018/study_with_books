#include <stdio.h>

int main(void)
{
   int num1, num2;

   printf("두 개의 정수를 입력하세요. \n");
   scanf("%d", &num1);
   scanf("%d", &num2);

   if (num1 < num2) {
      printf("%d보다 %d이 큰 값입니다. \n", num1, num2);
   }
   else if(num1 > num2) {
      printf("%d보다 %d이 큰 값입니다. \n", num2, num1);
   }
   else{
      printf("두 개의 수는 같은 값입니다. \n");
   }

   return 0;
}
