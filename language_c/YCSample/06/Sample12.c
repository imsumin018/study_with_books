#include <stdio.h>

int main(void)
{
   int res;
   int i;

   printf("�� ��° ó���� �ǳʶ۱��? (1~10)\n");
   scanf_s("%d", &res);

   for(i=1; i<=10; i++){
      if(i == res)
         continue;
      printf("%d��° ó���Դϴ�. \n", i);
   }

   return 0;
}
