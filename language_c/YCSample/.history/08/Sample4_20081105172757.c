#include <stdio.h>

/* buy 함수 정의 */
void buy(int x)
{
   printf("%d만 원짜리 차를 구입했습니다. \n", x);
}

/* buy 함수 호출 */ 
int main(void)
{
   int num;

   printf("1번째는 얼마짜리 차를 구입했습니까? \n");
   scanf("%d", &num);

   buy(num);

   printf("2번째는 얼마짜리 차를 구입했습니까? \n");
   scanf("%d", &num);

   buy(num);

  return 0;
}
