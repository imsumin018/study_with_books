/*
 * Ch11_5.cpp
 *
 *  Created on: 2015. 3. 9.
 *      Author: Administrator
 */

#include <iostream>
using namespace std;

void func3() {
	cout<<"func3:func3() throw ��"<<endl;
	throw "error";
	cout<<"func3:func3() throw ��"<<endl;
}

void func2() {
	cout<<"func2:func3() ȣ�� ��"<<endl;
	func3();
	cout<<"func2:func3() ȣ�� ��"<<endl;
}

void func1() {
	cout<<"func1:func2() ȣ�� ��"<<endl;
	func2();
	cout<<"func1:func2() ȣ�� ��"<<endl;
}

int main() {

	try {
		cout<<"main:func1() ȣ�� ��"<<endl;
		func1();
		cout<<"main:func1() ȣ�� ��"<<endl;
	} catch(const char *e) {
		cout<<"catch:"<<e<<endl;
	}

	return 0;
}
