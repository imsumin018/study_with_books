#include <stdio.h>

/* buy 함수 정의 */
void buy(int x, int y)
{
   printf("%d만원과 %d만 원짜리 차를 구입했습니다. \n", x, y);

}

/* buy 함수 호출 */ 
int main(void)
{
   int num1, num2;

   printf("얼마짜리 차를 구입했습니까? \n");
   scanf_s("%d", &num1);

   printf("얼마짜리 차를 구입했습니까? \n");
   scanf_s("%d", &num2);

   buy(num1, num2);

   return 0;
}
