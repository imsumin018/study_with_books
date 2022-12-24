/*
 * Ch11_10.cpp
 *
 *  Created on: 2015. 3. 9.
 *      Author: Administrator
 */

#include <iostream>
#include <string.h>
using namespace std;

class MyException {
protected:
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

class DevidedException: public MyException {

private:
	int num;
public:
	DevidedException(int n, const char *str):
		MyException(str) {
		num = n;
	}

	void printNum() {
		printMsg();
		cout<<num<<" : ���� ���� �� ����"<<endl;
	}
};

class IndexException: public MyException {
private:
	int idx;
public:
	IndexException(int i, const char *str) :
		MyException(str) {
		idx = i;
	}

	void printIdx() {
		printMsg();
		cout<<idx<<" : �߸��� �ε���"<<endl;
	}
};

int main() {

	int x, y, size = 3, i;
	int a[size];
	cout<<"1~3�� �ϳ��� �Է��϶�"<<endl;
	cin>>x;
	try {
		switch(x) {
		case 1:
			cout<<"1�� �Է��϶�"<<endl;
			cin>>y;
			if(y!=1) {
				throw MyException("�߸��� �Է°�");
			}
			break;

		case 2:
			for(i=0; i<size; i++) {
				a[i] = i+1;
			}
			for(i=0; i<=size; i++) {
				if(i<size) {
					cout<<"a["<<i<<"]="<<a[i]<<endl;
				} else {
					throw IndexException(i, "�迭 �ε��� ����");
				}
			}
			break;

		case 3:
			cout<<"���� ���ڸ� �Է��϶�, 0�� �ȵ�"<<endl;
			cin>>y;
			if(y!=0) {
				i=3/y;
				cout<<"3/"<<y<<"="<<i<<endl;
			} else {
				throw DevidedException(y, "0���� ���� �� ����. �Ҵ�");
			}
			break;

		default:
			cout<<"�߸��� �Է°�"<<endl;
		}
	} catch(MyException e) {
		e.printMsg();
	} catch(DevidedException e) {
		e.printNum();
	} catch(IndexException e) {
		e.printIdx();
	} catch(...) {
		cout<<"��Ÿ ���� �߻�"<<endl;
	}
	cout<<"���α׷� ����"<<endl;

	return 0;
}
