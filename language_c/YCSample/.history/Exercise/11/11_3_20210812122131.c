#include <stdio.h>

/* 구조체 형 struct Person의 선언 */
typedef struct Person{
   int age;
   double weight;
   double height;
}Person;

/* aging 함수의 선언 */
void aging(Person *p);

int main(void)
{
   Person prs;
   
   printf("나이를 입력하세요. \n");
   scanf_s("%d", &prs.age);

   printf("몸무게를 입력하세요. \n");
   scanf_s("%lf", &prs.weight);

   printf("키를 입력하세요. \n");
   scanf_s("%lf", &prs.height);

   printf("나이 %d 몸무게 %f 키 %f입니다. \n", 
        prs.age, prs.weight, prs.height);

   aging(&prs);

   printf("1년이 경과했습니다. \n");

   printf("나이 %d 몸무게 %f 키 %f입니다. \n", 
        prs.age, prs.weight, prs.height);

   return 0;
}

/* aging 함수의 정의 */
void aging(Person* p)
{
   p->age++;
}
