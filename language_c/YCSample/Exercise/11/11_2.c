#include <stdio.h>

/* ����ü �� struct Person�� ���� */
typedef struct Person{
   int age;
   double weight;
   double height;
}Person;

int main(void)
{
   Person prs[2];
   int i, j;
   
   for(i=0; i<2; i++){
      printf("���̸� �Է��ϼ���. \n");
      scanf_s("%d", &prs[i].age);

      printf("�����Ը� �Է��ϼ���. \n");
      scanf_s("%lf", &prs[i].weight);

      printf("Ű�� �Է��ϼ���. \n");
      scanf_s("%lf", &prs[i].height);
   }

   for(j=0; j<2; j++){
      printf("���� %d ������ %f Ű %f�Դϴ�. \n", 
            prs[j].age, prs[j].weight, prs[j].height);
   }
   return 0;
}
