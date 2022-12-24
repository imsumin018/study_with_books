#include <stdio.h>
int main(void)
{
   int i;
   int sum = 0;

   fprintf(stderr, "소스 파일 이름 : %s\n", __FILE__);
   fprintf(stderr, "작성일자 : %s\n", __DATE__);
   fprintf(stderr, "작성시간 : %s\n", __TIME__);
   for(i=1; i<=5; i++){
      sum = i + sum;
   }
   printf("1~5까지의 합계는 %d입니다. \n", sum);

   return 0;
}
