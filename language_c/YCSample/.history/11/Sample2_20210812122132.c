#include <stdio.h>

/* 구조체 형 struct Car의 선언 */
struct Car{
   int num;
   double gas;
};

int main(void)
{
   struct Car car1;

   printf("멤버를 입력하세요. \n");
   scanf_s("%d", &car1.num);

   printf("연료량을 입력하세요. \n");
   scanf_s("%lf", &car1.gas);

   printf("자동차 번호는 %d : 연료량은 %f입니다. \n", car1.num, car1.gas);

   return 0;
}
