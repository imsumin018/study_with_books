#include <stdio.h>

/* 구조체 형 struct Person의 선언 */
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
      printf("나이를 입력하세요. \n");
      scanf_s("%d", &prs[i].age);

      printf("몸무게를 입력하세요. \n");
      scanf_s("%lf", &prs[i].weight);

      printf("키를 입력하세요. \n");
      scanf_s("%lf", &prs[i].height);
   }

   for(j=0; j<2; j++){
      printf("나이 %d 몸무게 %f 키 %f입니다. \n", 
            prs[j].age, prs[j].weight, prs[j].height);
   }
   return 0;
}
