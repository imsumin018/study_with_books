#include <stdio.h>

int main(void)
{
   int res;

   printf("������ �Է��ϼ���. \n");
   scanf("%d", &res);
   
   if((res % 2) == 0)
      printf("%d�� ¦���Դϴ�. \n", res);
   else
      printf("%d�� Ȧ���Դϴ�. \n", res);

   return 0;
}
