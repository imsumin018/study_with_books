#include <stdio.h>

int main(void)
{
   double height, width;

   printf("삼각형의 높이를 입력하세요. \n");
   scanf("%lf", &height);

   printf("삼각형의 밑변을 입력하세요. \n");
   scanf("%lf", &width);

   printf("삼각형의 면적은 %f입니다. \n", height * width / 2);

   return 0;
}
