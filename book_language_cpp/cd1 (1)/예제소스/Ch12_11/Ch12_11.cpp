/*
 * Ch12_11.cpp
 *
 *  Created on: 2015. 3. 10.
 *      Author: Administrator
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	vector<int> data;

	data.push_back(5);
	data.push_back(2);
	data.push_back(30);
	data.push_back(1);
	data.push_back(7);
	data.push_back(93);
	data.push_back(4);
	data.push_back(6);

	vector<int>::iterator it;
	it = max_element(data.begin(), data.end());
	cout<<"�ִ밪 : "<<*it<<endl;

	it = min_element(data.begin(), data.end());
	cout<<"�ּҰ� : "<<*it<<endl;

	return 0;
}
