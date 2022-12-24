/*
 * Ch10_1.cpp
 *
 *  Created on: 2015. 3. 5.
 *      Author: Administrator
 */

#include <iostream>
using namespace std;
template<typename Type>

Type add(Type x, Type y) {
	return x + y;
}

int main() {
	int a = add(3, 4);
	double b = add(3.4, 5.3);

	cout<<"a:"<<a <<", b:"<<b <<endl;
}
