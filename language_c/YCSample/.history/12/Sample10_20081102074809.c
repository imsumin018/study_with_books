#include <stdio.h>
#define NUM 5

int main(void)
{
   FILE *fp; 
   int test[NUM];
   int i, j;

   fp = fopen_s("test2.txt", "w");

   if(fp == NULL){
      printf("������ ������ �ʽ��ϴ�. \n");
      return 1;
   }
   else{
      printf("������ �������ϴ�. \n");
   }

   printf("%d���� ������ �Է��ϼ���. \n", NUM);
   for(i=0; i<NUM; i++){
      scanf("%d",&test[i]);
   }

   for(j=0; j<NUM; j++){
      fprintf(fp, "No.%-5d%d\n", j+1, test[j]);
   }
   printf("���Ϸ� ����߽��ϴ�. \n");

   fclose(fp);
   printf("������ �ݾҽ��ϴ�. \n");

   return 0;
}
