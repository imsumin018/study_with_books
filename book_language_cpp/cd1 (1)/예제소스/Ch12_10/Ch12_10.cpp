/*
 * Ch12_10.cpp
 *
 *  Created on: 2015. 3. 10.
 *      Author: Administrator
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int i;
	vector<int> data;

	data.push_back(5);
	data.push_back(2);
	data.push_back(3);
	data.push_back(1);
	data.push_back(7);
	data.push_back(9);
	data.push_back(4);
	data.push_back(6);

	cout<<"������"<<endl;
	vector<int>::iterator it;
	for(it=data.begin(); it!=data.end(); it++) {
		cout<<*it<<", ";
	}
	cout<<endl;

	cout<<"������"<<endl;
	sort(data.begin(), data.end());
	for(it=data.begin(); it!=data.end(); it++) {
		cout<<*it<<", ";
	}
	cout<<endl;

	cout<<"reverse"<<endl;
	reverse(data.begin(), data.end());
	for(it=data.begin(); it!=data.end(); it++) {
		cout<<*it<<", ";
	}
	cout<<endl;

	return 0;
}
