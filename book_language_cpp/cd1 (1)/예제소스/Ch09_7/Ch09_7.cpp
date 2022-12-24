/*
 * Ch09_7.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>

using namespace std;

ostream &fillme(ostream &stream) {
	stream.width(10);
	stream.precision(4);
	stream.fill('*');

	return stream;
}

int main() {
	cout<<fillme<<123.456789<<endl;

	return 0;
}
