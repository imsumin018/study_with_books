/*
 * Date.cpp
 *
 *  Created on: 2015. 3. 4.
 *      Author: Administrator
 */

#include <iostream>
#include "Date.h"

Date::Date()  //����Ʈ ������
{
	std::cout<<"����Ʈ ������ ȣ��!!\n";
	year = 2000;
	month = 1;
	day = 1;
}

Date::Date(int sy, int sm, int sd) //������
{
	std::cout<<"������ ȣ��!!";
	year = sy;
	month = sm;
	day = sd;
}

void Date::GetDate()
{
	std::cout<<"������ "<<year<<"��"<<month<<"��"<<day<<"�� �Դϴ�.\n";
}


