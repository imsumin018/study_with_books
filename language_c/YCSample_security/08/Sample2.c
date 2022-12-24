#include <stdio.h>

/* buy 함수 정의 */
void buy(void)
{
   printf("차를 구입했습니다. \n");
}

/* buy 함수 호출 */
int main(void)
{
   buy();

   printf("차 1대를 더 구입합니다. \n");

   buy();

   return 0;
}
