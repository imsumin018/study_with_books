/*
 * Ch13_1.cpp
 *
 *  Created on: 2015. 3. 10.
 *      Author: Administrator
 */

#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int i;
	i=10;
	cout<<"i: "<<i<<endl;

	char p[4];
	//p="aaa";
	strcpy(p, "bbb");
	cout<<"p:"<<p<<endl;

	return 0;

}
