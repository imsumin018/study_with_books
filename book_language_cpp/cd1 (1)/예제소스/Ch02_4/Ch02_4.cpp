/*
 * Ch02_4.cpp
 *
 *  Created on: 2015. 3. 3.
 *      Author: Administrator
 */

#include <iostream>

int main()
{
	using namespace std;
	char i;

	cout<<"등급을 소문자로 입력하세요(범위 a~d까지) : ";
	cin>>i;

	switch(i) {
	case 'a':
	cout<<"A등급입니다.\n";
	//break;

	case 'b':
	cout<<"B등급입니다.\n";
	//break;

	case 'c':
	cout<<"C등급입니다.\n";
	//break;

	case 'd':
	cout<<"D등급입니다.\n";
	//break;

	default:
		cout<<"다시 입력하세요.\n";

	}

	return 0;
}
