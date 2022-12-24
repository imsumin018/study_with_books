/*
 * const.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include "const.h"

using namespace std;

int ConstClass::getA() const
{
	return a;
}

int* ConstClass::getB()
{
	int *pN = &b;
	return pN;
}

void ConstClass::printA() const
{
	cout<<"a= "<<getA()<<endl;
}

void ConstClass::printB()
{
	cout<<"b = "<<*getB()<<endl;
}

int main()
{
	ConstClass cc;

	return 0;
}


