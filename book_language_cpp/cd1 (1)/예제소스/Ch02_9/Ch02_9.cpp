/*
 * Ch02_9.cpp
 *
 *  Created on: 2015. 3. 3.
 *      Author: Administrator
 */

#include <iostream>

int main()
{
	using namespace std;
	int score[4];  //���̰� 4�� ������ �迭 score ����
	int i, sum;  //�迭 �ε��� i�� ��ü ������ ���ϱ� ���� ������ ���� sum ����
	float average;  //��հ��� ���ϱ� ���� �Ǽ��� ���� average ����

	for(i=0, sum=0; i<4; i++) {
		cout<<i+1<<" ��° �л� ������ �Է��Ͻÿ� : ";
		cin>>score[i];
		sum+=score[i];  //������ ��� ���Ѵ�.
	}

	average = sum/4;  //��� ������ ������

	for(i=0; i<4; i++) {
		cout<<i+1<<" ��° �л� ���� : "<<score[i]<<endl;
	}

	cout<<"��ü ���� : "<<sum<<endl;
	cout<<"��� ���� : "<<average<<endl;

	return 0;

}

