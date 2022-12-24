#include <stdio.h>

/* 구조체 형 struct Car의 선언 */
typedef struct Car{
   int num;
   double gas;
}Car;

/* show 함수의 선언 */
void show(Car c);

int main(void)
{
   Car car1 = {0, 0.0};

   printf("번호를 입력하세요. \n");
   scanf_s("%d", &car1.num);

   printf("연료량을 입력하세요. \n");
   scanf_s("%lf", &car1.gas);

   show(car1);

   return 0;
}

/* show 함수의 정의 */
void show(Car c)
{
   printf("자동차 번호는 %d : 연료량은 %f입니다. \n", c.num, c.gas);
}
