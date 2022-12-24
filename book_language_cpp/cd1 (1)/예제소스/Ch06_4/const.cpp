/*
 * const.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>

#include "const.h"

using namespace std;

ConstClass::ConstClass() : a(10), b(20)
{
	a=100;
	b=200;

	cout<<"a= "<<a<<", b = "<<b<<endl;
}

int main()
{
	ConstClass cc;

	return 0;
}
