/*
 * Date.h
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#ifndef DATE_H_
#define DATE_H_

class Date {
private:
	int year, month, day;
	char *dName;
public:
	Date(const char *sName, int sy, int sm, int sd);  //持失切
	void ShowDate();
	~Date();  //社瑚切
};

#endif /* DATE_H_ */
