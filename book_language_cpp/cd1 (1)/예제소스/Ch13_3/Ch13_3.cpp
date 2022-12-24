/*
 * Ch13_3.cpp
 *
 *  Created on: 2015. 3. 10.
 *      Author: Administrator
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1("abcdefghijklmn");
	cout<<"str1의 length:"<<str1.length()<<endl;
	cout<<"str1의 size:"<<str1.size()<<endl;
	cout<<"str1의 capacity:"<<str1.capacity()<<endl;
	cout<<"str1의 max_size:"<<str1.max_size()<<endl;

	str1.reserve(50);
	cout<<"reverse 후"<<endl;
	cout<<"str1의 length:"<<str1.length()<<endl;
	cout<<"str1의 size:"<<str1.size()<<endl;
	cout<<"str1의 capacity:"<<str1.capacity()<<endl;
	cout<<"str1의 max_size:"<<str1.max_size()<<endl;

	string str2;
	if(str2.empty()) {
		cout<<"빈 문자열"<<endl;
		str2 = "aaa";
	}
	cout<<"str2:"<<str2<<endl;

	return 0;
}
