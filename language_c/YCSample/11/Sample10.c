#include <stdio.h>

/* 구조체 형 struct Car의 선언 */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   Car cars[3];
   int i;

   cars[0].num = 1234; cars[0].gas = 25.5;
   cars[1].num = 4567; cars[1].gas = 52.2;
   cars[2].num = 7890; cars[2].gas = 20.5;

   for(i=0; i<3; i++){
      printf("자동차 번호는 %d : 연료량은 %f입니다. \n", cars[i].num, cars[i].gas);
   }

   return 0;
}
