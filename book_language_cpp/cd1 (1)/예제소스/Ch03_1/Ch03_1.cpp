/*
 * Ch03_1.cpp
 *
 *  Created on: 2015. 3. 3.
 *      Author: Administrator
 */

#include <iostream>

using namespace std;
void swap(int var1, int var2);

int main() {
	int a = 10, b = 20;

	swap(a, b);
	cout<< "a = " <<a<<" b = " <<b<<endl;

	return 0;
}

void swap(int var1, int var2) {
	int temp;

	temp = var1;
	var1 = var2;
	var2 = temp;

	cout<<"var1 = " <<var1<< " var2 = "<<var2<<endl;
}


