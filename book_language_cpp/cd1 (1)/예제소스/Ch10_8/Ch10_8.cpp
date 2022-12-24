/*
 * Ch10_8.cpp
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

public:
	Add(Type x, Type y) :
		x(x), y(y) {

	}

	void getResult() {
		Type z = x + y;
		cout<<"\nresult : "<< z;
	}

};

template<> void Add<char>::getResult() {
	char str[3];
	str[0] = x;
	str[1] = y;
	str[2] = '\0';

	cout<<"\nresult:" <<str;
}

int main() {
	Add<int> a1(1, 2);
	a1.getResult();

	Add<double> a0(1.2, 2.1);
	a0.getResult();

	Add<char> a2('x', 'y');
	a2.getResult();

	return 0;
}
