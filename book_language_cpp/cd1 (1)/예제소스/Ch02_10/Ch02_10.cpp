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
    int i, score[4][2], sum[2];      /* ��ü ������ ���ϱ� ���� �������� sum ���� ���� */
    float average[2];             /* ��հ��� ���ϱ� ���� �Ǽ����� ���� ���� */

    /* ���� ���� */
    score[0][0] = 90;
    score[1][0] = 87;
    score[2][0] = 100;
    score[3][0] = 85;

    /* ���� ���� */
    score[0][1] = 98;
    score[1][1] = 79;
    score[2][1] = 92;
    score[3][1] = 76;

    for(i=0, sum[0]=0, sum[1]=0; i<4; i++) {
        sum[0] += score[i][0];         /* ���� ���� ���� */
        sum[1] += score[i][1];         /* ���� ���� ���� */
    };

    average[0] = sum[0]/4;              /* ������ ���� ��հ� ���ϱ� */
    average[1] = sum[1]/4;              /* ������ ���� ��հ� ���ϱ� */

    cout << "���� ��ü ���� : "<< sum[0] << ", ���� ��� ���� : " << average[0] << endl;
/* ���� ������ �հ� ��� */
    cout << "���� ��ü ���� : "<< sum[1] << ", ���� ��� ���� : " << average[1] << endl;
 /* ���� ������ �հ� ��� */
    return 0;
}
