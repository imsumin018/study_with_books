/*
 * Ch12_3.cpp
 *
 *  Created on: 2015. 3. 9.
 *      Author: Administrator
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int i;
	vector<int> data;

	for(i=0; i<3; i++) {
		data.push_back(i+1);
	}

	for(i=0; i<data.size(); i++) {
		cout<<"data["<<i<<"]="<<data[i]<<endl;
	}

	data.clear();
	if(data.empty()) {
		cout<<"���Ͱ� �����."<<endl;
	}

	return 0;
}
