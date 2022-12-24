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
public:
	Date();  //디폴트 생성자
	Date(int sy, int sm, int sd);  //생성자
	void GetDate();
};

#endif /* DATE_H_ */
