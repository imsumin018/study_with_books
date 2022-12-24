/*
 * Ch03_4.cpp
 *
 *  Created on: 2015. 3. 3.
 *      Author: Administrator
 */

#include <iostream>

inline int simple(int n) {
	int result = 1;
	for(int i=1; i<=n; i++)
		result *= i;
	return result;
}

int main() {
	using namespace std;
	int a, b, c;

	a = simple(5);
	b = simple(4);
	c = simple(7);

	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;

	return 0;
}


