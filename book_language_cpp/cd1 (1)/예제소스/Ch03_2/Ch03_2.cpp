/*
 * Ch03_2.cpp
 *
 *  Created on: 2015. 3. 3.
 *      Author: Administrator
 */

#include <iostream>

void swap(int *var1, int *var2);

int main() {
	using namespace std;
	int a=10, b=20;

	swap(&a, &b);
	cout<<"a= "<<a<<" b= "<<b<<endl;
	return 0;
}

void swap(int *var1, int *var2) {
	using namespace std;
	int temp;

	temp = *var1;
	*var1 = *var2;
	*var2 = temp;

	cout<<"var1 = "<<*var1<<" var2 = "<<*var2<<endl;
}
