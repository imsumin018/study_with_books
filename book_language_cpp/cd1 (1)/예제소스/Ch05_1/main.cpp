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
			Date("���� ����", 2014, 12, 29),
			Date("���� ����", 2009, 12, 11),
			Date("�����", 2020, 5, 14)
	};

	Mday[0].ShowDate();
	Mday[1].ShowDate();
	Mday[2].ShowDate();

	return 0;
}

