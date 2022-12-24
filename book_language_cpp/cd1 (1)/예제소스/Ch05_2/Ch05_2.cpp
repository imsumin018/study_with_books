/*
 * Ch05_2.cpp
 *
 *  Created on: 2015. 3. 13.
 *      Author: Administrator
 */

#include <iostream>

class printThis {
public:
	int year, month, day;
	printThis(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}

	void print() {
		std::cout<<"입력한 날짜는 "<<year<<"년 "<<month<<"월 "<<day<<"일 입니다."<<std::endl;
	}
};

int main() {

	printThis pT(9999, 12, 31);
	pT.print();

	return 0;
}

