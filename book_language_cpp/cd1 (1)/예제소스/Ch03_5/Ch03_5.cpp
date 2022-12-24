/*
 * Ch03_5.cpp
 *
 *  Created on: 2015. 3. 3.
 *      Author: Administrator
 */

#include <iostream>

int add(int a, int b);
double add(double a, double b, double c);

int main() {
	using namespace std;

	cout<<"add(3, 4) = " <<add(3, 4) <<endl;
	cout<<"add(3.5, 4.7, 5.0) = "<<add(3.5, 4.7, 5.0) << endl;

	return 0;
}

int add(int a, int b) {
	return a+b;
}

double add(double a, double b, double c) {
	return a+b+c;
}


