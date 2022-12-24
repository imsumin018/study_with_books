#include <stdio.h>

/* 공용체 형 union Year의 선언 */
typedef union Year{
   int ad;
   int old; 
}Year;

int main(void)
{
   Year myyear;
   int a, o;

   printf("연도를 입력하세요. \n");
   scanf("%d", &a);

   myyear.ad  = a;

   printf("올해는 %d년입니다. \n", myyear.ad);
   printf("나이는 %d살입니다. \n", myyear.old);

   printf("나이를 입력하세요. \n");
   scanf("%d",&o);

   myyear.old = o;

   printf("나이는 %d살입니다. \n", myyear.old);
   printf("연도는 %d년입니다. \n", myyear.ad);

   return 0;
}