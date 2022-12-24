/*
 * Date.h
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#ifndef DATE_H_
#define DATE_H_

#include <iostream>
using namespace std;

class Date {
private:
	int year, month, day;
public:
	void SetDate(int y, int m, int d);
	void GetDate();
};

#endif /* DATE_H_ */
