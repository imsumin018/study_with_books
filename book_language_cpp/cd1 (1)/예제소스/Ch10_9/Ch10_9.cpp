/*
 * Ch10_9.cpp
 *
 *  Created on: 2015. 3. 9.
 *      Author: Administrator
 */

#include <iostream>
using namespace std;

template<typename Type>
class Add {
private:
	Type x;
	Type y;
	Type z;

public:
	Add(Type x, Type y) :
		x(x), y(y) {

	}

	void getResult() {
		z = x + y;
	}

	void printResult() {
		cout<<"result:"<<z<<"\n";
	}
};

template<>
class Add<char> {
private:
	char x;
	char y;
	char z[3];

public:
	Add(char x, char y):
		x(x), y(y) {

	}

	void getResult() {
		z[0] = x;
		z[1] = y;
		z[2] = '\0';
	}

	void printResult() {
		cout<<"result:"<<z<<"\n";
	}
};

int main() {
	Add<int> a1(1, 2);
	a1.getResult();
	a1.printResult();

	Add<double> a0(1.2, 2.1);
	a0.getResult();
	a0.printResult();

	Add<char> a2('x', 'y');
	a2.getResult();
	a2.printResult();

	return 0;
}
