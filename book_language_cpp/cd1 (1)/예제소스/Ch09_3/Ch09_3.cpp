/*
 * Ch09_3.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>

using namespace std;

int main(void) {
	float x = 12.340;
	float y = 1.0 + 20.0 / 3.0;
	int z = 0x35F;

	cout.width(10);
	cout<<"Test1"<<endl;
	cout.fill('*');
	cout.width(10);
	cout<<"Test2"<<endl;
	cout.setf(ios::left);
	cout.width(10);
	cout<<"Test3"<<endl;

	cout.precision(4);
	cout.setf(ios::showpos);  // '+' ��ȣ�� ǥ���Ѵ�.
	cout<<"x = "<<x<<endl;
	cout.unsetf(ios::showpos);  // '+' ��ȣ�� ǥ������ �ʴ´�.
	cout<<"y = "<<y<<endl;
	cout.setf(ios::showbase);  //16������ '0x'�� ���ο��� ǥ���Ѵ�.
	cout.setf(ios::hex, ios::basefield);  //16������ �⺻ �ʵ忡 ����Ѵ�.
	cout<<"z = "<<z<<endl;

	return 0;
}
