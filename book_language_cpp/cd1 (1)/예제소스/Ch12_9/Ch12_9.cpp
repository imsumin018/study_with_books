/*
 * Ch12_9.cpp
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
	for(i=0; i<10; i++) {
		data.push_back(i+1);
	}

	vector<int>::iterator it;
	for(it=data.begin(); it!=data.end(); it++) {
		cout<<*it<<", ";
	}

	cout<<endl<<"ã�� ���� ���� �Է��϶�"<<endl;

	cin>>i;

	it = find(data.begin(), data.end(), i);

	if(it!=data.end()) {
		cout<<"ã�� �� : "<<*it<<endl;
	} else {
		cout<<"ã�� ���� ����."<<endl;
	}

	return 0;
}
