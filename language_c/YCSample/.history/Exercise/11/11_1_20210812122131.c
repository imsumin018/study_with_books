#include <stdio.h>

/* ����ü �� struct Person�� ���� */
typedef struct Person{
   int age;
   double weight;
   double height;
}Person;

int main(void)
{
   Person prs1, prs2;
   
   printf("���̸� �Է��ϼ���. \n");
   scanf_s("%d", &prs1.age);

   printf("�����Ը� �Է��ϼ���. \n");
   scanf_s("%lf", &prs1.weight);

   printf("Ű�� �Է��ϼ���. \n");
   scanf_s("%lf", &prs1.height);

   printf("���̸� �Է��ϼ���. \n");
   scanf_s("%d", &prs2.age);

   printf("�����Ը� �Է��ϼ���. \n");
   scanf_s("%lf", &prs2.weight);

   printf("Ű�� �Է��ϼ���. \n");
   scanf_s("%lf", &prs2.height);

   printf("���� %d ������ %f Ű %f�Դϴ�. \n", 
         prs1.age, prs1.weight, prs1.height);

   printf("���� %d ������ %f Ű %f�Դϴ�. \n", 
         prs2.age, prs2.weight, prs2.height);

   return 0;
}
