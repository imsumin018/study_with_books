#include <stdio.h>

/* ����ü �� struct Person�� ���� */
typedef struct Person{
   int age;
   double weight;
   double height;
}Person;

/* aging �Լ��� ���� */
void aging(Person *p);

int main(void)
{
   Person prs;
   
   printf("���̸� �Է��ϼ���. \n");
   scanf_s("%d", &prs.age);

   printf("�����Ը� �Է��ϼ���. \n");
   scanf_s("%lf", &prs.weight);

   printf("Ű�� �Է��ϼ���. \n");
   scanf_s("%lf", &prs.height);

   printf("���� %d ������ %f Ű %f�Դϴ�. \n", 
        prs.age, prs.weight, prs.height);

   aging(&prs);

   printf("1���� ����߽��ϴ�. \n");

   printf("���� %d ������ %f Ű %f�Դϴ�. \n", 
        prs.age, prs.weight, prs.height);

   return 0;
}

/* aging �Լ��� ���� */
void aging(Person* p)
{
   p->age++;
}
