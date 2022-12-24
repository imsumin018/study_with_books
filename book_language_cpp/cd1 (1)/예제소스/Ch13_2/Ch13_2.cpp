/*
 * Ch13_2.cpp
 *
 *  Created on: 2015. 3. 10.
 *      Author: Administrator
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
	//빈 문자열 생성
	string str1();

	//char*를 복사하여 문자열 생성
	string str2("abcdefghijklmn");

	//str2를 복사하여 생성
	string str3(str2);

	//str2를 세 번째 위치에서부터 문자 4개를 복사하여 생성
	string str4(str2, 3, 4);

	//str2를 세 번째 위치에서 끝까지 복사하여 생성
	string str5(str2, 3);

	char *p = "opqrstuvwxyz";

	//char*를 복사하여 생성
	string str6(p);

	//char*의 문자 4개를 복사하여 생성
	string str7(p, 4);

	//길이가 5인 문자열을 생성하여 'x'로 채움
	string str8(5, 'x');

	cout<<"str1:"<<str1<<endl;
	cout<<"str2:"<<str2<<endl;
	cout<<"str3:"<<str3<<endl;
	cout<<"str4:"<<str4<<endl;
	cout<<"str5:"<<str5<<endl;
	cout<<"str6:"<<str6<<endl;
	cout<<"str7:"<<str7<<endl;
	cout<<"str8:"<<str8<<endl;

	return 0;

}
