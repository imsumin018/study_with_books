/*
 * Ch02_10.cpp
 *
 *  Created on: 2015. 3. 3.
 *      Author: Administrator
 */

#include <iostream>

int main()
{
    using namespace std;
    int i, score[4][2], sum[2];      /* 전체 성적을 합하기 위한 정수형의 sum 변수 선언 */
    float average[2];             /* 평균값을 구하기 위한 실수형의 변수 선언 */

    /* 영어 성적 */
    score[0][0] = 90;
    score[1][0] = 87;
    score[2][0] = 100;
    score[3][0] = 85;

    /* 수학 성적 */
    score[0][1] = 98;
    score[1][1] = 79;
    score[2][1] = 92;
    score[3][1] = 76;

    for(i=0, sum[0]=0, sum[1]=0; i<4; i++) {
        sum[0] += score[i][0];         /* 영어 성적 총합 */
        sum[1] += score[i][1];         /* 수학 성적 총합 */
    };

    average[0] = sum[0]/4;              /* 성적에 대한 평균값 구하기 */
    average[1] = sum[1]/4;              /* 성적에 대한 평균값 구하기 */

    cout << "영어 전체 성적 : "<< sum[0] << ", 영어 평균 성적 : " << average[0] << endl;
/* 영어 성적의 합과 평균 */
    cout << "수학 전체 성적 : "<< sum[1] << ", 수학 평균 성적 : " << average[1] << endl;
 /* 수학 성적의 합과 평균 */
    return 0;
}
