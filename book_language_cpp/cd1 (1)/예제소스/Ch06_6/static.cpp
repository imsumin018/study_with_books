/*
 * const.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include "static.h"

#include <iostream>

using namespace std;
int StaticClass::c=1;  //static 멤버 초기화

int StaticClass::getA() {
	return a;
}

int* StaticClass::getB() {
	int *pN = &b;
	return pN;
}

void StaticClass::printA() {
	cout <<"a= "<<getA() <<endl;
}

void StaticClass::printB() {
	cout<<"b= "<<*getB() <<endl;
}

void StaticClass::increaseC() {
	c++;
}

void StaticClass::printC() {
	cout<<"c = "<<c<<endl;
}

int main() {
	StaticClass cc, cc1;
	cc.printA();
	cc.printB();
	cc.printC();
	cc.increaseC();
	cc.printC();
	cc1.increaseC();
	cc1.printC();

	return 0;
}

