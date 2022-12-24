/*
 * Ch10_3.cpp
 *
 *  Created on: 2015. 3. 9.
 *      Author: Administrator
 */

#include <iostream>
using namespace std;

class MyNum {
private:
	int num;
public:
	MyNum(int num) :
		num(num) {

	}
	friend int operator+(MyNum &n1, MyNum &n2) {
		return n1.num + n2.num;
	}

	//void printNum() {
	//    cout<<num;
	//}

	friend ostream& operator <<(ostream &out, const MyNum &n) {
		out << "num:" <<n.num;
		return out;
	}
};

template<typename Type>
Type add(Type x, Type y) {
	return x+y;
}

int main() {
	int a = add(3, 4);
	double b = add(3.4, 5.3);
	MyNum x(10);
	MyNum y(20);
	MyNum c = add(x, y);
	cout<<"a:" <<a<< ", b:"<<b<<", c:"<<c<<endl;
	//c.printNum();
}

