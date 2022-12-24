#include <stdio.h>

int main(void)
{
   int num;
   int i;

   printf("몇 개의 *을 출력할까요? \n");
   scanf("%d", &num);

   for(i=1; i<=num; i++){
      printf("*");
   }
   printf("\n");

   return 0;
}
