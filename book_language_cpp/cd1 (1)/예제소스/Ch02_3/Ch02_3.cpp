/*
 * Ch02_3.cpp
 *
 *  Created on: 2015. 3. 3.
 *      Author: Administrator
 */

#include <iostream>

int main()
{
	using namespace std;
	int i;

	cout<<"숫자를 입력하세요 :";
	cin>>i;

	if(i<0)
		cout<<"i는 음수입니다. \n";
	else if(i>0)
		cout<<"i는 양수입니다.\n";
	else if(i==0)
		cout<<"i는 0입니다.\n";

	return 0;
}
