#include <stdio.h>
#include <string.h>

int main(void)
{
   char str1[10];
   char str2[10];

   strcpy_s(str1, 10, "Hello");
   strcpy_s(str2, 10, "Goodbye");

   printf("�迭 str1�� %s�Դϴ�. \n", str1);
   printf("�迭 str2�� %s�Դϴ�. \n", str2);

   return 0;
}
