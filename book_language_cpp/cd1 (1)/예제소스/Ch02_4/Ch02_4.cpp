/*
 * Ch02_4.cpp
 *
 *  Created on: 2015. 3. 3.
 *      Author: Administrator
 */

#include <iostream>

int main()
{
	using namespace std;
	char i;

	cout<<"����� �ҹ��ڷ� �Է��ϼ���(���� a~d����) : ";
	cin>>i;

	switch(i) {
	case 'a':
	cout<<"A����Դϴ�.\n";
	//break;

	case 'b':
	cout<<"B����Դϴ�.\n";
	//break;

	case 'c':
	cout<<"C����Դϴ�.\n";
	//break;

	case 'd':
	cout<<"D����Դϴ�.\n";
	//break;

	default:
		cout<<"�ٽ� �Է��ϼ���.\n";

	}

	return 0;
}
