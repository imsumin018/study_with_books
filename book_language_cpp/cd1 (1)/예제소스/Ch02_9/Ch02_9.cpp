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
	int score[4];  //길이가 4인 정수형 배열 score 선언
	int i, sum;  //배열 인덱스 i와 전체 성적을 합하기 위한 정수형 변수 sum 선언
	float average;  //평균값을 구하기 위한 실수형 변수 average 선언

	for(i=0, sum=0; i<4; i++) {
		cout<<i+1<<" 번째 학생 성적을 입력하시오 : ";
		cin>>score[i];
		sum+=score[i];  //성적을 모두 더한다.
	}

	average = sum/4;  //평균 성적을 산출함

	for(i=0; i<4; i++) {
		cout<<i+1<<" 번째 학생 성적 : "<<score[i]<<endl;
	}

	cout<<"전체 성적 : "<<sum<<endl;
	cout<<"평균 성적 : "<<average<<endl;

	return 0;

}

