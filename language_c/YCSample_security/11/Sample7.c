#include<stdio.h>

/* 구조체 형 struct Car1의 선언 */
typedef struct Car1{
   int num;
   double gas;
   unsigned int tire : 3;
   unsigned int roof : 1;
   unsigned int color : 4;
}Car1;

/* 구조체 형 struct Car2의 선언 */
typedef struct Car2{
   int num;
   double gas;
   unsigned int tire;
   unsigned int roof;
   unsigned int color;
}Car2;

int main(void)
{
   printf("비트 필드를 사용한 구조체의 크기는 %d바이트입니다. \n", sizeof(Car1));
   printf("비트 필드를 사용하지 않는 구조체의 크기는 %d바이트입니다. \n", sizeof(Car2));

   return 0;
}
