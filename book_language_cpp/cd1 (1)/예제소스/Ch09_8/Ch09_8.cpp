/*
 * Ch09_8.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream outstream;
	outstream.open("text.txt", ios::out);

	outstream<<"Text"<<endl;
	outstream<<100<<' '<<hex<<100<<endl;

	outstream.close();

	ifstream instream("text.txt");

	char str[100];
	int i, j;

	instream>>str>>i>>j;
	cout<<str<<' '<<i<<' '<<j<<endl;
	instream.close();

	return 0;
}
