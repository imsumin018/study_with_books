#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   char *str;
   int num, i;

   printf("�� ������ a�� �غ��ұ��? \n");
   scanf_s("%d", &num);

   str = (char *) malloc (sizeof(char) * (num+1));
   if(!str){
      printf("�޸𸮸� Ȯ���� �� �������ϴ�. \n");
      return 1;
   }

   for(i=0; i<num; i++){
      *(str+i) = 'a';
   }
   *(str+num) = '\0';

   printf("%s�� �غ��߽��ϴ�. \n", str);

   free(str);

   return 0;
}
