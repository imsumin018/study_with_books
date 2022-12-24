/*
 * Ch09_4.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float x = 12.340;
	float y = 1.0 + 20.0 / 3.0;
	int z = 0x35F;

	cout<< dec <<z<<endl;
	cout<< oct <<z <<endl;
	cout<< setfill('*') <<setw(10);
	cout<< 100 <<"times"<<"2"<<endl;

	return 0;
}


