/*
 * Ch13_7.cpp
 *
 *  Created on: 2015. 3. 10.
 *      Author: Administrator
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1 = "aaa";
	string str2 = "aaa";
	string str3("aaa");

	if(str1==str2) {
		cout<<"str1==str2:true"<<endl;
	} else {
		cout<<"str1==str2:false"<<endl;
	}

	if(str1==str3) {
		cout<<"str1==str3:true"<<endl;
	} else {
		cout<<"str1==str3:false"<<endl;
	}

	string str4 = str1 + "bbb";
	if(str1.compare(str2)==0) {
		cout<<"str1==str4"<<endl;
	}

	string str5 = str4.substr(3, 3);
	cout<<"str4:"<<str4<<endl;
	cout<<"str5:"<<str5<<endl;

	int idx = str4.find('b');
	cout<<"b의 위치 :"<<idx<<endl;

	idx = str4.find("ab");
	cout<<"ab의 위치:"<<idx<<endl;

	idx = str4.find_first_of('b');
	cout<<"b의 첫 위치:"<<idx<<endl;

	idx = str4.find_last_of('b');
	cout<<"b의 마지막 위치:"<<idx<<endl;

	return 0;
}
