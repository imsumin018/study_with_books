/*
 * Date.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include "Date.h"

Date::Date(int sy, int sm, int sd) {  //생성자
	std::cout<<"생성자 호출!!\n";
	year = sy;
	month = sm;
	day = sd;
}

void Date::GetDate() {
	std::cout<<"오늘은 "<<year<<"년"<<month<<"월" <<day<<"일 입니다.\n";
}

