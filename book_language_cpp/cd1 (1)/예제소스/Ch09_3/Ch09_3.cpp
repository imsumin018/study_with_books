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
	cout.setf(ios::showpos);  // '+' 부호를 표시한다.
	cout<<"x = "<<x<<endl;
	cout.unsetf(ios::showpos);  // '+' 부호를 표시하지 않는다.
	cout<<"y = "<<y<<endl;
	cout.setf(ios::showbase);  //16진수에 '0x'의 접두에를 표기한다.
	cout.setf(ios::hex, ios::basefield);  //16진수를 기본 필드에 사용한다.
	cout<<"z = "<<z<<endl;

	return 0;
}
