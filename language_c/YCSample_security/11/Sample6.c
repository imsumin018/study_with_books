#include<stdio.h>

/* 구조체 형 struct Car의 선언 */
typedef struct Car{
   int num;
   double gas;
}Car;

int main(void)
{
   printf("int형의 크기는 %d바이트입니다. \n", sizeof(int));
   printf("double형의 크기는 %d바이트입니다. \n", sizeof(double));
   printf("구조체 struct Car형의 크기는 %d바이트입니다. \n", sizeof(Car));
   printf("구조체 struct Car형 포인터의 크기는 %d바이트입니다. \n", sizeof(Car *));

   return 0;
}
