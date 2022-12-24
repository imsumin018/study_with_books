/*
 * Ch13_5.cpp
 *
 *  Created on: 2015. 3. 10.
 *      Author: Administrator
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1 = "abcd";
	cout<<"str1:"<<str1<<endl;

	str1.insert(1, "111");
	cout<<"str1:"<<str1<<endl;

	str1.insert(5, "2345678", 2, 3);
	cout<<"str1:"<<str1<<endl;

	str1.assign("abcdefg");
	cout<<"str1:"<<str1<<endl;

	str1.insert(3, "123456", 4);
	cout<<"str1:"<<str1<<endl;

	str1.insert(2, 3, 'x');
	cout<<"str1:"<<str1<<endl;

	return 0;
}
