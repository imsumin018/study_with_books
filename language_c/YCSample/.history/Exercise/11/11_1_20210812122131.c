#include <stdio.h>

/* 구조체 형 struct Person의 선언 */
typedef struct Person{
   int age;
   double weight;
   double height;
}Person;

int main(void)
{
   Person prs1, prs2;
   
   printf("나이를 입력하세요. \n");
   scanf_s("%d", &prs1.age);

   printf("몸무게를 입력하세요. \n");
   scanf_s("%lf", &prs1.weight);

   printf("키를 입력하세요. \n");
   scanf_s("%lf", &prs1.height);

   printf("나이를 입력하세요. \n");
   scanf_s("%d", &prs2.age);

   printf("몸무게를 입력하세요. \n");
   scanf_s("%lf", &prs2.weight);

   printf("키를 입력하세요. \n");
   scanf_s("%lf", &prs2.height);

   printf("나이 %d 몸무게 %f 키 %f입니다. \n", 
         prs1.age, prs1.weight, prs1.height);

   printf("나이 %d 몸무게 %f 키 %f입니다. \n", 
         prs2.age, prs2.weight, prs2.height);

   return 0;
}
