/*
 * Ch11_3.cpp
 *
 *  Created on: 2015. 3. 9.
 *      Author: Administrator
 */

#include <iostream>
using namespace std;

int main() {

	int x;
	cout<<"1~3�� �ϳ��� �Է��϶�" <<endl;
	cin>>x;
	try {
		switch(x) {
		case 1:
			throw -1;
			break;

		case 2:
			throw "error message";
			break;

		case 3:
			throw 2.5;
			break;

		default :
			cout <<"�߸��� �Է°�" <<endl;
		}
	} catch(int e) {
		cout<<"error int code : " <<e<<endl;
	} catch(const char *e) {
		cout<<e<<endl;
	} catch(double e) {
		cout<<"error double code:"<<e<<endl;
	}

	return 0;
}
