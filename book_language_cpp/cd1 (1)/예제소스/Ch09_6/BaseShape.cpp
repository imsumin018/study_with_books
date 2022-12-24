/*
 * BaseShape.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include "BaseShape.h"

using namespace std;

BaseShape::BaseShape() : m_X(0), m_Y(0) {

}

BaseShape::BaseShape(int i, int j) {
	m_X = i;
	m_Y = j;
}

ostream &operator << (ostream &stream, BaseShape ob) {
	stream<<"("<<ob.m_X<<", "<<ob.m_Y<<")"<<endl;
	return stream;
}

istream &operator >> (istream &stream, BaseShape &ob) {
	cout<<"Enter coordinates : ";
	stream>>ob.m_X>>ob.m_Y;
	return stream;
}

int main() {
	BaseShape a(1, 1), b(10, 23);
	cout << a << b;

	cin>>a;
	cout<<a;

	return 0;
}
