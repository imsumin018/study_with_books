#include <stdio.h>
#define NUM 5

int main(void)
{
   int test[NUM] = {80,60,22,50,75};
   int i;

   for(i=0; i<NUM; i++){
      printf("%d��° ����� ������ %d���Դϴ�. \n", i+1, test[i]);
   }

   return 0;

}
