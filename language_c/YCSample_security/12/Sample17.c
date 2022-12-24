#include <stdio.h>
#define DEBUG

int main(void)
{
   int i;
   int sum = 0;
   
   for(i=1; i<=5; i++){

      #ifdef DEBUG
         fprintf(stderr, "변수 sum의 값은 %d이 되었습니다. \n", sum);
      #endif
      sum = i + sum;
   }
   printf("1~5까지의 합계는 %d입니다. \n", sum);

   return 0;
}
