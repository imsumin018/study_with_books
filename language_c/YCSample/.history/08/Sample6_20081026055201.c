#include <stdio.h>

/* buy 함수 정의 */
int buy(int x, int y)
{
   int z;
   
   printf("%d만원과 %d만 원짜리 차를 구입했습니다. \n", x, y);

   z= x+y;

   return z;
}

/* buy 함수 호출 */ 
int main(void)
{
   int num1, num2, sum;

   printf("얼마짜리 차를 구입했습니까? \n");
   scanf("%d",&num1);

   printf("얼마짜리 차를 구입했습니까? \n");
   scanf("%d",&num2);

   sum = buy(num1, num2);
   
   printf("합계 %d만원입니다. \n", sum);

   return 0;
}
