#include <stdio.h>

int main(void)
{
   int num = 1;

   while(num){
      printf("������ �Է��ϼ���. (0�̸� ����)\n");
      scanf("%d", &num);
      printf("%d�� �Է��߽��ϴ�. \n", num);
   }
   printf("�ݺ��� �����մϴ�. \n");

   return 0;
}
