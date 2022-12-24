#include <stdio.h>

int main(void)
{
   double dnum;
   int inum;

   dnum = 160.5;

   printf("키는 %f cm입니다. \n", dnum);

   printf("int형 변수에 대입합니다. \n");

   inum = dnum;

   printf("키는 %d cm입니다. \n", inum);

   return 0;
}
