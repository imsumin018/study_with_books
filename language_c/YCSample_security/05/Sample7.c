#include <stdio.h>

int main(void)
{
   int res;
   char ans;

   printf("�� ��°�� �����ұ��? \n");
   printf("������ �Է��ϼ���. \n");

   scanf("%d", &res);

   ans = (res==1) ? 'A' : 'B'; 

   printf("%c�ڽ��� �����߽��ϴ�. \n", ans);

   return 0;
}
