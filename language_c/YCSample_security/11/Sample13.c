#include <stdio.h>

/* ������ enum Week�� ���� */
typedef enum Week{SUN, MON, TUE, WED, THU, FRI, SAT} Week;

int main(void)
{
   Week w;
   w = SUN;

   switch(w){
      case SUN: printf("�Ͽ����Դϴ�. \n"); break;
      case MON: printf("�������Դϴ�. \n"); break;
      case TUE: printf("ȭ�����Դϴ�. \n"); break;
      case WED: printf("�������Դϴ�. \n"); break;
      case THU: printf("������Դϴ�. \n"); break;
      case FRI: printf("�ݿ����Դϴ�. \n"); break;
      case SAT: printf("������Դϴ�. \n"); break;
      default: printf("���� �������� �𸣰ڽ��ϴ�. \n"); break;
   }

   return 0;
}
