/*
 * Ch04_1.cpp
 *
 *  Created on: 2015. 3. 3.
 *      Author: Administrator
 */

#include <iostream>
using namespace std;

class Date {
private:
	int year, month, day;
public:
	void SetDate(int y, int m, int d);
	void GetDate();
};

void Date::SetDate(int y, int m, int d) {
	year = y;
	month = m;
	day = d;
}

void Date::GetDate() {
	cout<<"������ "<<year<<"�� "<<month<<"�� "<<day<<"�� �Դϴ�.\n"<<endl;
}

int main() {
	Date Today;
	Today.SetDate(9999, 12, 31);
	Today.GetDate();

	return 0;
}

