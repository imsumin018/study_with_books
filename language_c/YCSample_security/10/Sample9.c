#include <stdio.h>

int main(void)
{
   char str[3][20] = {"Hello", "Goodbye", "Thankyou"};
   int i;

   for(i=0; i<3; i++){
      printf("���ڿ��� %s�Դϴ�. \n", str[i]);
   }

   return 0;
}
