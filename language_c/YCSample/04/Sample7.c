#include <stdio.h>

int main(void)
{
   int a = 1;
   int b = 0;

   printf("short int형 크기는 %d바이트입니다. \n", sizeof(short int));
   printf("int형 크기는 %d바이트입니다. \n", sizeof(int));
   printf("long int형 크기는 %d바이트입니다. \n", sizeof(long int));
   printf("float형 크기는 %d바이트입니다. \n", sizeof(float));
   printf("double형 크기는 %d바이트입니다. \n", sizeof(double));
   printf("long double형 크기는 %d바이트입니다. \n", sizeof(long double));
   printf("변수 a의 크기는 %d바이트입니다. \n", sizeof(a));
   printf("식 a+b의 크기는 %d바이트입니다. \n", sizeof(a+b));

   return 0;
}
