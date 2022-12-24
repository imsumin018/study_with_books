#include <stdio.h>

int main(void)
{
   int a;

   a = 5;

   printf("변수 a의 값은 %d입니다. \n", a);
   printf("변수 a의 어드레스는 %p입니다. \n", &a);	

   return 0;
}

