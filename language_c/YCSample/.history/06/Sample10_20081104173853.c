#include <stdio.h>

int main(void)
{
   int res;
   int i;

   printf("�� ��°���� ������ �����ұ��? (1~10)\n");

   scanf("%d", &res);

   for(i=1; i<=10; i++){
      printf("%d��° ó���Դϴ�. \n", i);
      if(i == res)
         break;
   }

   return 0;
}
