/*
 * Ch11_4.cpp
 *
 *  Created on: 2015. 3. 9.
 *      Author: Administrator
 */

#include <iostream>
using namespace std;

void func() {
	cout<<"func() : throw ��"<<endl;
	throw "error";
	cout<<"func() : throw ��"<<endl;
}

int main() {

	try {
		cout<<"func() ȣ�� ��"<<endl;
		func();
		cout<<"func() ȣ�� ��"<<endl;
	} catch (const char *e) {
		cout<<e<<endl;
	}

	return 0;
}

