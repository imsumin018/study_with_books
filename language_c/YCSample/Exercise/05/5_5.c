#include <stdio.h>

int main(void)
{
   int res;

   printf("������ �Է��ϼ���.  \n");
   scanf_s("%d", &res);
   
   printf("������ %d�Դϴ�. \n", res);
   
   switch(res){
   case 1:
      printf("����� �ʿ��մϴ�. \n");
      break;
   case 2:
      printf("���� �� ����ϼ���. \n");
      break;
   case 3:
      printf("�� �߽��ϴ�. \n");
      break;
   case 4:
      printf("�ſ� �� �߽��ϴ�. \n");
      break;
   case 5:
      printf("�ſ� ����մϴ�. \n");
      break;
   }

   return 0;
}
