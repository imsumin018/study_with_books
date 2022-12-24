/*
 * main.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include "Date.h"

int main() {
	Date Mday[3] = {
			Date("나의 생일", 2014, 12, 29),
			Date("너의 생일", 2009, 12, 11),
			Date("기념일", 2020, 5, 14)
	};

	Mday[0].ShowDate();
	Mday[1].ShowDate();
	Mday[2].ShowDate();

	return 0;
}

