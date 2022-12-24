#include <stdio.h>

/* buy 함수 정의 */
void buy(int x)
{
   printf("%d만 원짜리 차를 구입했습니다. \n", x);
}

/* buy 함수 호출 */ 
int main(void)
{

   buy(20);
   buy(50);

  return 0;
}
