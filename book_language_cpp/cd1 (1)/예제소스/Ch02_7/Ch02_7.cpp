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

	cout<<"1~30 ������ �� �� ������ �����ּ��� ";

	while(i != answer) {
		cin>>i;
		if(i<answer)
			cout<<i<<"���� Ů�ϴ�.";
		else if(i>answer)
			cout<<i<<"���� �۽��ϴ�.";
		else
			cout<<i<<"�¾ҽ��ϴ�!!";
	}

	return 0;
}

