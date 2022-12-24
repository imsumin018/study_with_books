/*
 * Ch02_4.cpp
 *
 *  Created on: 2015. 3. 3.
 *      Author: Administrator
 */

#include <iostream>
const int answer=15;

int main()
{
	using namespace std;
	int i;

	cout<<"1~30 사이의 수 중 정답을 맞춰주세요 ";

	while(i != answer) {
		cin>>i;
		if(i<answer)
			cout<<i<<"보다 큽니다.";
		else if(i>answer)
			cout<<i<<"보다 작습니다.";
		else
			cout<<i<<"맞았습니다!!";
	}

	return 0;
}

