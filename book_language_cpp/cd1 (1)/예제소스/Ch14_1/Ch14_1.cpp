/*
 * Ch14_1.cpp
 *
 *  Created on: 2015. 3. 11.
 *      Author: Administrator
 */

#include <iostream>

namespace One {
	char* getMsg() {
		return "hello namesapce one";
	}
}

namespace Two {
	char* getMsg() {
		return "hello namespace two";
	}
}

using namespace std;
using namespace One;

int main() {

	cout<<getMsg()<<endl;
	cout<<Two::getMsg()<<endl;

	return 0;
}
