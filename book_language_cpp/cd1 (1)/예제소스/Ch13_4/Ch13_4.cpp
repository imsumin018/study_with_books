/*
 * Ch13_4.cpp
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

	string str2 = str1;
	cout<<"str2:"<<str2<<endl;

	str2 +="efg";
	cout<<"str2:"<<str2<<endl;

	str1.append(str2);
	cout<<"str1:"<<str1<<endl;

	str2.push_back('x');
	cout<<"str2:"<<str2<<endl;

	str2.clear();
	cout<<"str2:"<<str2<<endl;

	str1.erase(1, 2);
	cout<<"str1:"<<str1<<endl;

	str2="abcdefg";
	cout<<"str2:"<<str2<<endl;

	str2.replace(1, 2, "zx");
	cout<<"str2:"<<str2<<endl;

	str2.resize(3);
	cout<<"str2:"<<str2<<endl;

	str1.assign("123456");
	cout<<"str1:"<<str1<<endl;

	str1.assign("765432", 5);
	cout<<"str1:"<<str1<<endl;

	str1.assign("abcde12345", 2, 4);
	cout<<"str1:"<<str1<<endl;

	str1.swap(str2);
	cout<<"str1:"<<str1<<endl;
	cout<<"str2:"<<str2<<endl;

	return 0;
}
