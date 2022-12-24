/*
 * Ch13_6.cpp
 *
 *  Created on: 2015. 3. 10.
 *      Author: Administrator
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1 = "abcdefg";
	cout<<"str1:"<<str1<<endl;
	cout<<"str1[3]:"<<str1[3]<<endl;
	cout<<"str1.at(3):"<<str1.at(3)<<endl;

	str1[4]='1';
	cout<<"str1:"<<str1<<endl;

	str1.at(4) = '2';
	cout<<"str1:"<<str1<<endl;

	return 0;
}
