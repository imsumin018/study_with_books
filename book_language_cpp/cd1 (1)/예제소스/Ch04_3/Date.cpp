/*
 * Date.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include "Date.h"

Date::Date(int sy, int sm, int sd) {  //������
	std::cout<<"������ ȣ��!!\n";
	year = sy;
	month = sm;
	day = sd;
}

void Date::GetDate() {
	std::cout<<"������ "<<year<<"��"<<month<<"��" <<day<<"�� �Դϴ�.\n";
}

