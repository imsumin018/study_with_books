#include <stdio.h>

int main(void)
{
   int res;
   int i;

   printf("몇 번째에서 루프를 중지할까요? (1~10)\n");

   scanf("%d", &res);

   for(i=1; i<=10; i++){
      printf("%d번째 처리입니다. \n", i);
      if(i == res)
         break;
   }

   return 0;
}
