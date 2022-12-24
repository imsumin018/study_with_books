/*
 * Ch10_7.cpp
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
		Type z = x+y;
		cout << "\nresult:"<<z;
	}
};

int main() {
	Add<int> a1(1, 2);
	a1.getResult();

	Add<char> a2('x', 'y');
	a2.getResult();

	return 0;
}

