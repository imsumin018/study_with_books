/*
 * Ch11_8.cpp
 *
 *  Created on: 2015. 3. 9.
 *      Author: Administrator
 */

#include <iostream>
#include <string.h>
using namespace std;

class MyException {
private:
	char *msg;

public:
	MyException(const char *str) {
		int size = strlen(str);
		msg = new char[size+1];
		strcpy(msg, str);
	}

	~MyException() {
		delete[] msg;
	}

	void printMsg() {
		cout<<msg<<endl;
	}
};

int main() {

	int x;
	cout<<"1~3�� �ϳ��� �Է��϶�"<<endl;
	cin>>x;
	try {
		switch(x) {
		case 1:
			throw MyException("1�� ����");
			break;

		case 2:
			throw MyException("2�� ����");
			break;

		case 3:
			throw MyException("3�� ����");
			break;

		default:
			cout<<"�߸��� �Է°�"<<endl;
		}
	} catch(MyException e) {
		e.printMsg();
	} catch(...) {
		cout<<"��Ÿ ���� �߻�"<<endl;
	}

	return 0;
}

