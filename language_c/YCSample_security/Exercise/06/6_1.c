#include <stdio.h>

int main(void)
{
   int i;

   printf("1~10 가운데 짝수를 출력합니다. \n");
   for(i=1; i<=10; i++){
      if((i % 2) == 0)
          printf("%d\n", i);
   }
   return 0;
}
