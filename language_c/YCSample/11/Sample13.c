#include <stdio.h>

/* 열거형 enum Week의 선언 */
typedef enum Week{SUN, MON, TUE, WED, THU, FRI, SAT} Week;

int main(void)
{
   Week w;
   w = SUN;

   switch(w){
      case SUN: printf("일요일입니다. \n"); break;
      case MON: printf("월요일입니다. \n"); break;
      case TUE: printf("화요일입니다. \n"); break;
      case WED: printf("수요일입니다. \n"); break;
      case THU: printf("목요일입니다. \n"); break;
      case FRI: printf("금요일입니다. \n"); break;
      case SAT: printf("토요일입니다. \n"); break;
      default: printf("무슨 요일인지 모르겠습니다. \n"); break;
   }

   return 0;
}
