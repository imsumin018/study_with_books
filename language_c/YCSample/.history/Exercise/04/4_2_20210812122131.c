#include <stdio.h>

int main(void)
{
   int width;

   printf("정사각형의 변의 길이를 입력하세요. \n");
   scanf_s("%d", &width);

   printf("정사각형의 면적은 %d입니다. \n", width * width);

   return 0;
}
